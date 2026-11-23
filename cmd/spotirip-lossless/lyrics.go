package main

import (
	"context"
	"encoding/json"
	"fmt"
	"io"
	"net/http"
	"net/url"
	"os"
	"path/filepath"
	"strconv"
	"strings"

	metadatapb "github.com/devgianlu/go-librespot/proto/spotify/metadata"
)

type lyricsResponse struct {
	SyncedLyrics string `json:"syncedLyrics"`
	PlainLyrics  string `json:"plainLyrics"`
}

func downloadLyrics(ctx context.Context, client *http.Client, track *metadatapb.Track, audioPath string) (string, error) {
	query := make(url.Values)
	query.Set("track_name", track.GetName())
	if len(track.Artist) > 0 {
		query.Set("artist_name", track.Artist[0].GetName())
	}
	if album := track.GetAlbum(); album != nil {
		query.Set("album_name", album.GetName())
	}
	if duration := track.GetDuration(); duration > 0 {
		query.Set("duration", strconv.FormatInt(int64((duration+500)/1000), 10))
	}
	request, err := http.NewRequestWithContext(ctx, http.MethodGet, "https://lrclib.net/api/get?"+query.Encode(), nil)
	if err != nil {
		return "", err
	}
	request.Header.Set("Accept", "application/json")
	response, err := doWithRetry(ctx, client, request)
	if err != nil {
		return "", err
	}
	defer response.Body.Close()
	if response.StatusCode == http.StatusNotFound {
		return "", nil
	}
	if response.StatusCode != http.StatusOK {
		return "", fmt.Errorf("LRCLIB: HTTP %d", response.StatusCode)
	}
	data, err := io.ReadAll(io.LimitReader(response.Body, 1024*1024+1))
	if err != nil {
		return "", err
	}
	if len(data) > 1024*1024 {
		return "", fmt.Errorf("LRCLIB response is too large")
	}
	var lyrics lyricsResponse
	if err := json.Unmarshal(data, &lyrics); err != nil {
		return "", fmt.Errorf("LRCLIB response: %w", err)
	}
	content, extension := lyrics.SyncedLyrics, ".lrc"
	if strings.TrimSpace(content) == "" {
		content, extension = lyrics.PlainLyrics, ".txt"
	}
	if strings.TrimSpace(content) == "" {
		return "", nil
	}
	if !strings.HasSuffix(content, "\n") {
		content += "\n"
	}
	path := strings.TrimSuffix(audioPath, filepath.Ext(audioPath)) + extension
	temporary := path + ".tmp"
	if err := os.WriteFile(temporary, []byte(content), 0o644); err != nil {
		return "", err
	}
	if err := os.Rename(temporary, path); err != nil {
		os.Remove(temporary)
		return "", err
	}
	return path, nil
}
