# Metadata and cover art

## Embedded information

After a successful download, the CLI adds available information without re-encoding:

- title
- artist and album artist
- album
- track and disc numbers
- release date, ISRC, composer, and copyright when supplied
- Spotify link as a single `SPOTIFY_URL` tag
- cover art at the largest resolution offered by album metadata

The link is not duplicated in `COMMENT` or `DESCRIPTION`. FFmpeg replaces global metadata during reprocessing, while the OGG path removes older URL comments explicitly. Players therefore do not receive duplicate Spotify URL entries.

## Cover selection

Cover information comes from album metadata. The CLI selects the image with the largest width-by-height area and downloads it from:

```text
https://i.scdn.co/image/<file-id>
```

The image is stored temporarily for processing and removed afterward. No WVD or credential file is used. If the track response lacks a usable image but contains an album GID, `ensureCoverMetadata` retrieves the full album metadata. Some releases provide no cover; in that case the media file remains without an image rather than creating an empty cover stream.

## FLAC

FLAC uses standard container and picture mechanisms. Audio data is not re-encoded, and the cover is embedded as front cover.

Validation commands:

```bash
flac -t FILE.flac
ffprobe -v error -show_entries format_tags:stream_tags FILE.flac
```

## OGG and Vorbis

FFmpeg cannot simply attach an arbitrary cover video stream to OGG, so the project uses a dedicated OGG postprocessor.

### Vorbis comments

The CLI locates the Vorbis comment packet `0x03 + "vorbis"`, preserves existing comments, and replaces or appends known fields.

The comment packet contains:

- vendor length and vendor string,
- comment count,
- length and content of each comment,
- a final framing bit.

### Cover art

The cover is encoded as a FLAC picture block and written as Base64 in `METADATA_BLOCK_PICTURE`. The block includes:

- picture type 3 for front cover,
- MIME type,
- description,
- width, height, color depth, and color count,
- data length and image bytes.

### Pages and CRC

Affected OGG pages are rebuilt after the comment packet grows. The implementation preserves or updates:

- segment count and segment table,
- payload,
- stream serial number,
- consecutive sequence numbers,
- newly calculated CRC values.

A missing segment-count field or malformed picture block is not accepted as success. FFprobe must recognize the result, and FFmpeg must decode it completely.

## MP4

Metadata and cover art are added after muxing. Because a real video stream already exists, the cover is inserted as an additional video stream with `attached_pic`. `ffprobe -select_streams v` counts existing video streams, ensuring that the disposition targets the cover even when subtitles are present. `use_metadata_tags` preserves the custom `SPOTIFY_URL` entry in the MP4 container.

## Error handling

A metadata failure does not discard a successful media download; it produces a warning. Changes to this functionality still require concrete container and metadata tests.

## Reproducibility

Metadata changes naturally alter the container hash. Container integrity is checked through codec properties and complete decoding rather than by comparing a tagged file's hash.

With `--verify`, these checks run after metadata processing: FFprobe validates containers and streams, and FFmpeg decodes the entire file with `-xerror`. `--lyrics` is independent and creates either a synchronized `.lrc` file or a plain `.txt` file through LRCLIB.
