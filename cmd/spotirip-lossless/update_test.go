package main

import (
	"archive/tar"
	"bytes"
	"compress/gzip"
	"context"
	"crypto/sha256"
	"encoding/hex"
	"encoding/json"
	"fmt"
	"net/http"
	"net/http/httptest"
	"os"
	"path/filepath"
	"strings"
	"testing"
)

func testArchive(t *testing.T, content []byte) []byte {
	t.Helper()
	var output bytes.Buffer
	compressed := gzip.NewWriter(&output)
	writer := tar.NewWriter(compressed)
	if err := writer.WriteHeader(&tar.Header{Name: "spotirip-lossless-linux-amd64/spotirip-lossless", Mode: 0o755, Size: int64(len(content)), Typeflag: tar.TypeReg}); err != nil {
		t.Fatal(err)
	}
	if _, err := writer.Write(content); err != nil {
		t.Fatal(err)
	}
	if err := writer.Close(); err != nil {
		t.Fatal(err)
	}
	if err := compressed.Close(); err != nil {
		t.Fatal(err)
	}
	return output.Bytes()
}

func updateServer(t *testing.T, archive []byte, version string, hash string) *httptest.Server {
	t.Helper()
	manifest := updateManifest{Version: version, Platforms: map[string]updatePackage{
		"linux-amd64": {URL: "bundle.tar.gz", SHA256: hash, Size: int64(len(archive))},
	}}
	return httptest.NewServer(http.HandlerFunc(func(writer http.ResponseWriter, request *http.Request) {
		switch request.URL.Path {
		case "/manifest.json":
			_ = json.NewEncoder(writer).Encode(manifest)
		case "/bundle.tar.gz":
			_, _ = writer.Write(archive)
		default:
			http.NotFound(writer, request)
		}
	}))
}

func TestPerformUpdate(t *testing.T) {
	archive := testArchive(t, []byte("new executable"))
	sum := sha256.Sum256(archive)
	server := updateServer(t, archive, "2099.1.0", hex.EncodeToString(sum[:]))
	defer server.Close()
	directory := t.TempDir()
	current := filepath.Join(directory, "spotirip-lossless")
	if err := os.WriteFile(current, []byte("old executable"), 0o755); err != nil {
		t.Fatal(err)
	}
	updated, err := performUpdate(context.Background(), updateRun{
		manifestURL: server.URL + "/manifest.json", currentPath: current, client: server.Client(),
		verify: func(path string) error {
			data, err := os.ReadFile(path)
			if err != nil {
				return err
			}
			if string(data) != "new executable" {
				return fmt.Errorf("falscher Inhalt")
			}
			return nil
		},
	})
	if err != nil || !updated {
		t.Fatalf("update failed: updated=%v, %v", updated, err)
	}
	data, err := os.ReadFile(current)
	if err != nil || string(data) != "new executable" {
		t.Fatalf("executable was not replaced: %q, %v", data, err)
	}
	backups, err := filepath.Glob(current + ".backup-*")
	if err != nil || len(backups) != 1 {
		t.Fatalf("backup missing: %v, %v", backups, err)
	}
}

func TestPerformUpdateRejectsBadHash(t *testing.T) {
	archive := testArchive(t, []byte("corrupted executable"))
	server := updateServer(t, archive, "2099.1.0", strings.Repeat("00", 32))
	defer server.Close()
	current := filepath.Join(t.TempDir(), "spotirip-lossless")
	if err := os.WriteFile(current, []byte("old executable"), 0o755); err != nil {
		t.Fatal(err)
	}
	updated, err := performUpdate(context.Background(), updateRun{manifestURL: server.URL + "/manifest.json", currentPath: current, client: server.Client()})
	if err == nil || !strings.Contains(err.Error(), "SHA-256") || updated {
		t.Fatalf("invalid checksum accepted: updated=%v, %v", updated, err)
	}
	data, readErr := os.ReadFile(current)
	if readErr != nil || string(data) != "old executable" {
		t.Fatalf("original file was modified: %q, %v", data, readErr)
	}
}

func TestPerformUpdateAlreadyCurrent(t *testing.T) {
	archive := testArchive(t, []byte("unbenutzt"))
	sum := sha256.Sum256(archive)
	server := updateServer(t, archive, "2000.1.0", hex.EncodeToString(sum[:]))
	defer server.Close()
	updated, err := performUpdate(context.Background(), updateRun{manifestURL: server.URL + "/manifest.json", currentPath: "unbenutzt", client: server.Client()})
	if err != nil || updated {
		t.Fatalf("older version installed: updated=%v, %v", updated, err)
	}
}

func TestUpdateArguments(t *testing.T) {
	options, err := parseArguments([]string{"--self-update", "--update-manifest", "https://example.com/update.json"})
	if err != nil || !options.selfUpdate || options.updateManifest != "https://example.com/update.json" {
		t.Fatalf("update arguments: %+v, %v", options, err)
	}
	options, err = parseArguments([]string{"--version"})
	if err != nil || !options.showVersion {
		t.Fatalf("Versionsargument: %+v, %v", options, err)
	}
}
