package main

import (
	"encoding/json"
	"errors"
	"fmt"
	"os"
	"os/exec"
	"path/filepath"
	"strings"
)

var errDuplicate = errors.New("existing file skipped")

func canonicalTrack(link string) string {
	id, err := parseTrack(link)
	if err != nil {
		return ""
	}
	return "https://open.spotify.com/track/" + id.Base62()
}

func findSpotifyURL(value any) string {
	switch current := value.(type) {
	case map[string]any:
		for key, nested := range current {
			if strings.EqualFold(key, "SPOTIFY_URL") {
				if text, ok := nested.(string); ok {
					return text
				}
			}
			if result := findSpotifyURL(nested); result != "" {
				return result
			}
		}
	case []any:
		for _, nested := range current {
			if result := findSpotifyURL(nested); result != "" {
				return result
			}
		}
	}
	return ""
}

func probeSpotifyURL(path string) string {
	ffmpeg, err := exec.LookPath("ffprobe")
	if err != nil {
		return ""
	}
	command := exec.Command(ffmpeg, "-v", "error", "-show_entries", "format_tags:stream_tags", "-of", "json", path)
	output, err := command.Output()
	if err != nil {
		return ""
	}
	var value any
	if err := json.Unmarshal(output, &value); err != nil {
		return ""
	}
	return findSpotifyURL(value)
}

func buildDuplicateIndex(outputDir string) (map[string]string, error) {
	index := make(map[string]string)
	if _, err := os.Stat(outputDir); os.IsNotExist(err) {
		return index, nil
	}
	return index, filepath.WalkDir(outputDir, func(path string, entry os.DirEntry, err error) error {
		if err != nil {
			return err
		}
		if entry.IsDir() || strings.HasSuffix(path, ".part") {
			return nil
		}
		switch strings.ToLower(filepath.Ext(path)) {
		case ".flac", ".ogg", ".mp3", ".m4a", ".mp4":
		default:
			return nil
		}
		if url := probeSpotifyURL(path); url != "" {
			if canonical := canonicalTrack(url); canonical != "" {
				index[canonical] = path
			}
		}
		return nil
	})
}

func filterDuplicateLinks(links []string, index map[string]string) []string {
	if len(index) == 0 {
		return links
	}
	filtered := make([]string, 0, len(links))
	for _, link := range links {
		if _, ok := index[link]; !ok {
			filtered = append(filtered, link)
		}
	}
	return filtered
}

func uniqueOutputPath(path string, mode string) (string, error) {
	if mode != "new" {
		return path, nil
	}
	if _, err := os.Stat(path); os.IsNotExist(err) {
		return path, nil
	}
	extension := filepath.Ext(path)
	base := strings.TrimSuffix(path, extension)
	for index := 1; index < 10000; index++ {
		candidate := fmt.Sprintf("%s (%d)%s", base, index, extension)
		if _, err := os.Stat(candidate); os.IsNotExist(err) {
			return candidate, nil
		}
	}
	return "", fmt.Errorf("no available filename for %s", path)
}
