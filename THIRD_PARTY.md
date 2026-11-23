# Third-party components

SpotiRip Lossless includes or uses the following components. First-party licensing is described in `LICENSE` and `NOTICE`; it does not replace the terms of third-party projects.

## go-librespot

- Project: https://github.com/devgianlu/go-librespot
- Local source: `reference/go-librespot`
- License: `reference/go-librespot/LICENSE`
- Usage: Spotify authentication, protocol, metadata, and CDN access
- Local changes: current Linux PlayPlay request, client version, and complete response preservation

## gowidevine

- Project: https://github.com/iyear/gowidevine
- Local source: `reference/gowidevine`
- License: `reference/gowidevine/LICENSE`
- Usage: Widevine challenge generation, license processing, and MP4 CENC decryption

## Go modules

The complete module list is in `go.mod`; build inputs are vendored in `vendor/`. These include `mp4ff`, Protocol Buffers, and networking and audio packages required by go-librespot. Corresponding license texts are collected in the `licenses` directory.

## Reconstructed Spotify resources

`program.bin.gz` and `initial-memory.bin.gz` were produced by analyzing the installed Spotify Linux client 1.3.8.620. They contain semantic operations, tables, and data, not a Spotify ELF or executable Spotify machine code. Unicorn is neither linked nor used at runtime.

These resources do not include a Spotify credential file or WVD file. Reference packages, analysis snapshots, test accounts, and test downloads are excluded from releases.

## First-party license

First-party code, documentation, and generated semantic resources are licensed under Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0). This is a source-available license with noncommercial and share-alike conditions. It is not an OSI-approved open-source license.
