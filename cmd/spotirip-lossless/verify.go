package main

import (
	"context"
	"fmt"
	"os/exec"
	"strings"
)

func verifyMedia(ctx context.Context, path string) error {
	ffprobe, err := exec.LookPath("ffprobe")
	if err != nil {
		return fmt.Errorf("ffprobe is required for --verify: %w", err)
	}
	probe := exec.CommandContext(ctx, ffprobe, "-v", "error", "-show_entries", "format=format_name:stream=codec_type,codec_name", "-of", "json", path)
	if output, err := probe.CombinedOutput(); err != nil {
		return fmt.Errorf("container validation: %w: %s", err, strings.TrimSpace(string(output)))
	}
	ffmpeg, err := exec.LookPath("ffmpeg")
	if err != nil {
		return fmt.Errorf("ffmpeg is required for --verify: %w", err)
	}
	command := exec.CommandContext(ctx, ffmpeg, "-v", "error", "-xerror", "-i", path, "-map", "0:v:0?", "-map", "0:a:0?", "-f", "null", "-")
	if output, err := command.CombinedOutput(); err != nil {
		return fmt.Errorf("full decode: %w: %s", err, strings.TrimSpace(string(output)))
	}
	return nil
}
