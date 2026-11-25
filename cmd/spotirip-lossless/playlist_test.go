package main

import (
	"os"
	"path/filepath"
	"testing"
)

func TestWriteM3U(t *testing.T) {
	dir := t.TempDir()
	links := []string{"a", "missing", "b"}
	paths := map[string]string{
		"a": filepath.Join(dir, "#Artist", "Album", "01 - One.flac"),
		"b": filepath.Join(dir, "Other", "Album", "02 - Two.ogg"),
	}
	target, written, err := writeM3U(dir, "My Mix", links, paths)
	if err != nil {
		t.Fatal(err)
	}
	if written != 2 {
		t.Fatalf("written = %d, want 2", written)
	}
	if filepath.Base(target) != "My Mix.m3u8" {
		t.Fatalf("target = %s", target)
	}
	data, err := os.ReadFile(target)
	if err != nil {
		t.Fatal(err)
	}
	want := "#EXTM3U\n#PLAYLIST:My Mix\n./#Artist/Album/01 - One.flac\n./Other/Album/02 - Two.ogg\n"
	if string(data) != want {
		t.Fatalf("got:\n%s\nwant:\n%s", data, want)
	}
}

func TestWriteM3UAtomicFailure(t *testing.T) {
	dir := t.TempDir()
	target := filepath.Join(dir, "My Mix.m3u8")
	if err := os.WriteFile(target, []byte("existing playlist"), 0o644); err != nil {
		t.Fatal(err)
	}
	if err := os.Mkdir(target+".tmp", 0o755); err != nil {
		t.Fatal(err)
	}
	if _, _, err := writeM3U(dir, "My Mix", nil, nil); err == nil {
		t.Fatal("expected write failure")
	}
	data, err := os.ReadFile(target)
	if err != nil {
		t.Fatal(err)
	}
	if string(data) != "existing playlist" {
		t.Fatalf("existing playlist changed: %q", data)
	}
}
