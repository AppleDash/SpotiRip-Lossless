# Changelog

All notable changes are documented here. Versions use numeric dotted identifiers and release tags use the same value prefixed with `v`.

## 2026.11.23.1

### Changed

- Raised the build requirement to Go 1.27 and updated application and test dependencies
- Updated CI and release automation to `actions/checkout` 7.0.1 and `actions/setup-go` 7.1.0

### Added

- Linux x86-64 CLI with embedded protocol and cipher resources for Spotify audio and music video downloads
- Best-quality FLAC, OGG Vorbis, and AAC selection with interactive format selection
- Audio-only, audio-plus-video, and video-only modes
- Album, artist, playlist, and link-list queues with bounded concurrency
- Duplicate detection, retries, and HTTP Range resume
- Metadata, cover art, lyrics, subtitles, and full output verification
- Reconstructed P-Code and nested bytecode engine with a Go CTR hot path
- Differential, concurrency, seek, partial-block, and shared-runtime reset tests
- HTTPS self-update with SHA-256 verification, self-testing, and atomic rollback
- CI and tagged-release workflows
- CC BY-NC-SA 4.0 licensing and collected third-party license texts

### Verified

- FLAC 24-bit downloads with complete decoding
- OGG and concurrent audio downloads
- 1920x1080 H.264/AAC video in `--video` and `--video-only` modes
- Self-update against a local release server, including replacement and rollback
- Release executable self-test and archive checksum validation

### Known limitations

- Current engine resources target Spotify 1.3.8.620 and Linux x86-64.
- Video requires a user-supplied Widevine L3 WVD file.
- Nonempty subtitle retrieval has not been verified because the real test track provided no subtitle languages.
