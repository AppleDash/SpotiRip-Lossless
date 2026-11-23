package main

import (
	"fmt"
	"os"
	"path/filepath"
	"strconv"
	"strings"

	metadatapb "github.com/devgianlu/go-librespot/proto/spotify/metadata"
)

func renderOutputPath(options cliOptions, track *metadatapb.Track, extension string) (string, error) {
	artist := "Unknown"
	if len(track.Artist) > 0 {
		artist = track.Artist[0].GetName()
	}
	template := options.outputTemplate
	if template == "" {
		template = "{artist}/{album}/{track} - {title}.{ext}"
	}
	trackNumber := strconv.Itoa(int(track.GetNumber()))
	discNumber := strconv.Itoa(int(track.GetDiscNumber()))
	replacer := strings.NewReplacer(
		"{artist}", safeName(artist),
		"{album}", safeName(track.GetAlbum().GetName()),
		"{title}", safeName(track.GetName()),
		"{track}", safeName(trackNumber),
		"{disc}", safeName(discNumber),
		"{ext}", strings.TrimPrefix(extension, "."),
	)
	rendered := replacer.Replace(template)
	if !strings.Contains(template, "{ext}") {
		rendered += extension
	}
	clean := filepath.Clean(rendered)
	if filepath.IsAbs(clean) || clean == ".." || strings.HasPrefix(clean, ".."+string(filepath.Separator)) {
		return "", fmt.Errorf("output template must stay within the destination directory")
	}
	return filepath.Join(options.outputDir, clean), nil
}

func prepareOutputPath(path string, mode string) (string, error) {
	if mode == "skip" {
		if _, err := os.Stat(path); err == nil {
			return "", errDuplicate
		}
	}
	return uniqueOutputPath(path, mode)
}
