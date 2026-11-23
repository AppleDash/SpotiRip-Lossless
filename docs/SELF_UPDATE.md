# Self-update

SpotiRip Lossless can verify and install a complete release from an HTTPS manifest. This also distributes updated embedded engine resources; no separate resource replacement is needed.

## Initial manifest configuration

```bash
./spotirip-lossless --self-update \
  --update-manifest "https://github.com/mcbabel/SpotiRip-Lossless/releases/latest/download/update-manifest.json"
```

After a successful check, the URL is stored in `.spotirip-update.json` in the current working directory. Later updates only require:

```bash
./spotirip-lossless --self-update
```

The URL can also be supplied without a settings file:

```bash
export SPOTIRIP_LOSSLESS_UPDATE_URL="https://github.com/mcbabel/SpotiRip-Lossless/releases/latest/download/update-manifest.json"
./spotirip-lossless --self-update
```

Print the built-in version with:

```bash
./spotirip-lossless --version
```

## Update process

The updater:

1. downloads at most 1 MiB of manifest over HTTPS,
2. compares the numeric application version,
3. selects only `linux-amd64`,
4. verifies the archive size and SHA-256,
5. extracts only the expected regular executable, limited to 256 MiB,
6. runs the new executable's real `--self-test` with the same credential file,
7. replaces the old executable atomically and creates a timestamped backup.

Plain HTTP is accepted only for local tests using `localhost` or `127.0.0.1`. Redirects must also remain on HTTPS. URLs containing embedded credentials are rejected. SHA-256 and HTTPS protect download integrity; the configured manifest and its hosting account are the trust source.

If the checksum, extraction, or self-test fails, the existing executable remains unchanged. Restart the program after a successful update. Backups use this form:

```text
spotirip-lossless.backup-<timestamp>
```

The program directory must be writable by the current user. The updater does not use `sudo` or install a background service.

## Relationship to Spotify updates

The self-updater installs an **already built and tested release**. It does not analyze Spotify client changes or modify the embedded engine resources. Users only need the release executable and its update manifest.

## Tests

Updater tests use a local HTTP server and cover replacement, backup, invalid checksums, and current-version checks:

```bash
go test ./cmd/spotirip-lossless
```
