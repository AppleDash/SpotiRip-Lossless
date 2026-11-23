# Contributing

## Development setup

Use Linux x86-64, Go 1.27 or newer, CGo, and a C++17 compiler. Install FFmpeg, FFprobe, FLAC, and the development packages listed in `README.md`.

```bash
go test ./cmd/... ./internal/...
go build -o bin/spotirip-lossless ./cmd/spotirip-lossless
```

## Changes

Keep changes focused and consistent with the surrounding code. Public source strings, comments, documentation, and CLI output must be English.

Do not include:

- credentials, WVD files, or Spotify profiles,
- reference captures or private analysis state,
- test downloads or generated logs,
- Spotify executables or machine code,
- unrelated dependency or formatting changes.

Run `go mod tidy` and `go mod vendor` after dependency changes. Do not change container formats, codecs, or cipher behavior without corresponding verification.

## Checks

Before submitting a change:

```bash
test -z "$(gofmt -l cmd internal)"
go test ./cmd/... ./internal/...
python3 scripts/collect-licenses.py
./scripts/build-release.sh
```

For C, C++, cipher, loader, or resource changes, also perform a real download and a complete decode check. Cover FLAC, OGG, and concurrent downloads when the change affects those paths. Video changes require `--video` and `--video-only` tests with a user-supplied WVD file.

Useful file checks:

```bash
flac -t FILE.flac
ffprobe -v error -show_entries format_tags:stream_tags FILE
ffmpeg -v error -i FILE -f null -
```

Never attach credential files, WVD files, or private reference captures to a pull request. Redact account identifiers and local paths from logs.

## Pull requests

Describe the behavioral change, the reason for it, and the exact verification performed. Note any untested cases and platform limitations. Do not claim that a build alone verifies cipher or resource changes.

Update behavior and manifest configuration are documented in `docs/SELF_UPDATE.md`.
