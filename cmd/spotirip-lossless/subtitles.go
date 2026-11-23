package main

import (
	"context"
	"fmt"
	"io"
	"net/http"
	"os"
	"path/filepath"
	"strings"
)

type subtitleFile struct {
	Path     string
	Language string
}

func downloadSubtitles(ctx context.Context, client *http.Client, manifest *videoManifest, outputPath string) ([]subtitleFile, error) {
	if len(manifest.SubtitleLanguageCodes) == 0 {
		return nil, nil
	}
	if manifest.SubtitleTemplate == "" || len(manifest.SubtitleBaseURLs) == 0 {
		return nil, fmt.Errorf("subtitle template is missing")
	}
	var files []subtitleFile
	for _, language := range manifest.SubtitleLanguageCodes {
		if language == "" {
			continue
		}
		language = safeName(language)
		template := strings.Replace(manifest.SubtitleTemplate, "{{language_code}}", language, 1)
		path := strings.TrimSuffix(outputPath, filepath.Ext(outputPath)) + "." + language + ".vtt"
		var lastErr error
		var data []byte
		for _, base := range manifest.SubtitleBaseURLs {
			url := manifestURL(base, template, videoProfile{FileType: "vtt"})
			request, err := http.NewRequestWithContext(ctx, http.MethodGet, url, nil)
			if err != nil {
				return nil, err
			}
			response, err := doWithRetry(ctx, client, request)
			if err != nil {
				lastErr = err
				continue
			}
			if response.StatusCode != http.StatusOK {
				response.Body.Close()
				lastErr = &httpStatusError{StatusCode: response.StatusCode}
				continue
			}
			data, err = io.ReadAll(io.LimitReader(response.Body, 8*1024*1024+1))
			response.Body.Close()
			if err == nil && len(data) <= 8*1024*1024 {
				lastErr = nil
				break
			}
			if err == nil {
				err = fmt.Errorf("subtitle file is too large")
			}
			lastErr = err
		}
		if lastErr != nil {
			return nil, fmt.Errorf("subtitles %s: %w", language, lastErr)
		}
		temporary := path + ".part"
		if err := os.WriteFile(temporary, data, 0o644); err != nil {
			return nil, err
		}
		if err := os.Rename(temporary, path); err != nil {
			os.Remove(temporary)
			return nil, err
		}
		files = append(files, subtitleFile{Path: path, Language: language})
	}
	return files, nil
}
