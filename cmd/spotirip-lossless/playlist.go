package main

import (
	"fmt"
	"os"
	"path/filepath"
	"strings"
)

func savePlaylist(outputDir string, playlist *playlistInfo, links []string, paths map[string]string) error {
	path, written, err := writeM3U(outputDir, playlist.name, links, paths)
	if err != nil {
		return fmt.Errorf("playlist file: %w", err)
	}
	fmt.Printf("Playlist: %s (%d of %d tracks)\n", path, written, len(links))
	return nil
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
