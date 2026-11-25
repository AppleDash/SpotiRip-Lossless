package main

import (
	"context"
	"fmt"
	"io"
	"net/http"
	"os"
	"path/filepath"
	"strings"
	"time"
)

func savePlaylist(ctx context.Context, outputDir string, playlist *playlistInfo, links []string, paths map[string]string) error {
	path, written, err := writeM3U(outputDir, playlist.name, links, paths)
	if err != nil {
		return fmt.Errorf("playlist file: %w", err)
	}
	fmt.Printf("Playlist: %s (%d of %d tracks)\n", path, written, len(links))
	if playlist.imageURL != "" {
		coverPath, err := downloadPlaylistCover(ctx, playlist.imageURL, strings.TrimSuffix(path, ".m3u8"))
		if err != nil {
			fmt.Printf("Warning: could not download playlist cover: %v\n", err)
		} else {
			fmt.Printf("Playlist cover: %s\n", coverPath)
		}
	}
	return nil
}

func downloadPlaylistCover(ctx context.Context, url, basePath string) (string, error) {
	// go-librespot constructs an invalid URL, so we fix it here
	url = strings.Replace(url, "https://u.scdn.co/images/pl/default/", "https://i.scdn.co/image/", 1)
	request, err := http.NewRequestWithContext(ctx, http.MethodGet, url, nil)
	if err != nil {
		return "", err
	}
	response, err := doWithRetry(ctx, &http.Client{Timeout: 30 * time.Second}, request)
	if err != nil {
		return "", err
	}
	defer response.Body.Close()
	if response.StatusCode != http.StatusOK {
		return "", fmt.Errorf("Cover HTTP %d", response.StatusCode)
	}
	data, err := io.ReadAll(io.LimitReader(response.Body, 32*1024*1024+1))
	if err != nil {
		return "", err
	}
	if len(data) == 0 || len(data) > 32*1024*1024 {
		return "", fmt.Errorf("invalid cover size")
	}
	extension := ".jpg"
	if http.DetectContentType(data) == "image/png" {
		extension = ".png"
	}
	path := basePath + extension
	if err := os.WriteFile(path, data, 0o644); err != nil {
		return "", err
	}
	return path, nil
}

func writeM3U(outputDir, name string, links []string, paths map[string]string) (string, int, error) {
	var builder strings.Builder
	builder.WriteString("#EXTM3U\n")
	builder.WriteString("#PLAYLIST:" + strings.ReplaceAll(name, "\n", " ") + "\n")
	written := 0
	for _, link := range links {
		path, ok := paths[link]
		if !ok || path == "" {
			continue
		}
		relative, err := filepath.Rel(outputDir, path)
		if err != nil {
			return "", 0, err
		}
		builder.WriteString(filepath.ToSlash(relative) + "\n")
		written++
	}
	if err := os.MkdirAll(outputDir, 0o755); err != nil {
		return "", 0, err
	}
	target := filepath.Join(outputDir, safeName(name)+".m3u8")
	if err := os.WriteFile(target, []byte(builder.String()), 0o644); err != nil {
		return "", 0, err
	}
	return target, written, nil
}
