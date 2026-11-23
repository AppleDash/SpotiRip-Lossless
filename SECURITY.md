# Security policy

## Reporting a vulnerability

Use [GitHub private vulnerability reporting](https://github.com/mcbabel/SpotiRip-Lossless/security/advisories/new) for security issues. Do not open a public issue containing exploit details, credentials, WVD files, or private reference captures.

Include the affected version, platform, reproduction steps, impact, and a minimal proof of concept where practical. Remove account identifiers and local credentials from all attachments.

## Sensitive files

Never publish or attach:

- `.spotify-credentials.json` or other account credentials,
- Widevine device files or private keys,
- Spotify profiles or private caches,
- unredacted authenticated network captures,
- private reference images containing personal data.

## Update trust model

Binary updates require HTTPS, a platform match, an archive-size check, and a SHA-256 match. Redirects must remain on HTTPS. URLs containing embedded credentials are rejected. Plain HTTP is only supported for local tests.

The configured manifest and its hosting account are the update trust source. Protect the repository and release-publishing credentials. A new executable is run through the real protocol self-test before it replaces the existing installation. A timestamped backup is retained for rollback.

## Supported versions

Security fixes are provided for the latest release. Check the installed version with:

```bash
./spotirip-lossless --version
```
