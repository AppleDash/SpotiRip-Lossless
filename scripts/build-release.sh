#!/usr/bin/env bash
set -euo pipefail

project_dir=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.." && pwd)
cd "$project_dir"

if [[ $(go env GOOS) != linux || $(go env GOARCH) != amd64 ]]; then
    printf 'The release build requires Linux on x86-64.\n' >&2
    exit 1
fi
if [[ $(go env CGO_ENABLED) != 1 ]]; then
    printf 'The release build requires CGo.\n' >&2
    exit 1
fi

go test ./cmd/... ./internal/...

name=spotirip-lossless-linux-amd64
stage="dist/$name"
archive="$stage.tar.gz"
rm -rf -- "$stage" "$archive" "$archive.sha256"
rm -f -- dist/update-manifest.json
mkdir -p "$stage"

go build -trimpath -ldflags='-s -w' -o "$stage/spotirip-lossless" ./cmd/spotirip-lossless
cp README.md THIRD_PARTY.md LICENSE NOTICE "$stage/"
cp -R licenses "$stage/"
mkdir -p "$stage/docs"
cp docs/METADATA.md docs/SELF_UPDATE.md docs/VIDEO.md "$stage/docs/"
tar -C dist -czf "$archive" "$name"
(
    cd dist
    sha256sum "$name.tar.gz" > "$name.tar.gz.sha256"
)
if [[ -n ${UPDATE_BASE_URL:-} ]]; then
    version=$("$stage/spotirip-lossless" --version)
    checksum=$(sha256sum "$archive" | awk '{print $1}')
    size=$(stat -c %s "$archive")
    url="${UPDATE_BASE_URL%/}/$name.tar.gz"
    printf '%s\n' '{' "  \"version\": \"$version\"," '  "platforms": {' '    "linux-amd64": {' "      \"url\": \"$url\"," "      \"sha256\": \"$checksum\"," "      \"size\": $size" '    }' '  }' '}' > dist/update-manifest.json
    printf 'Update-Manifest: dist/update-manifest.json\n'
fi
printf 'Release: %s\n' "$archive"
