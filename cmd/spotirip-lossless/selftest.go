package main

import (
	"context"
	"encoding/hex"
	"fmt"
	"io"
	"net/http"
	"time"

	librespot "github.com/devgianlu/go-librespot"
	extmetadatapb "github.com/devgianlu/go-librespot/proto/spotify/extendedmetadata"
	metadatapb "github.com/devgianlu/go-librespot/proto/spotify/metadata"
	streamingpb "github.com/devgianlu/go-librespot/proto/spotify/streaming"
	"github.com/devgianlu/go-librespot/spclient"
	"github.com/mcbabel/SpotiRip-Lossless/internal/spotifyclean"
)

func selfTest(ctx context.Context, sp *spclient.Spclient, client *http.Client) error {
	id, err := librespot.SpotifyIdFromBase62(librespot.SpotifyIdTypeTrack, "5HNCy40Ni5BZJFw1TKzRsC")
	if err != nil {
		return err
	}
	var track metadatapb.Track
	if err := sp.ExtendedMetadataSimple(ctx, *id, extmetadatapb.ExtensionKind_TRACK_V4, &track); err != nil {
		return fmt.Errorf("metadata: %w", err)
	}
	fileID, err := hex.DecodeString("810bc855e65b53255527e223019549845e8a2d22")
	if err != nil {
		return err
	}
	metadata, err := spotifyclean.ReadClientMetadata()
	if err != nil {
		return err
	}
	token, err := hex.DecodeString(metadata.PlayPlayToken)
	if err != nil {
		return err
	}
	sp.SetAppVersion(metadata.AppVersion)
	license, err := sp.PlayPlayRequest(ctx, fileID, &streamingpb.PlayPlayLicenseRequest{
		Version:       ptr(metadata.PlayPlayVersion),
		Token:         token,
		ContentType:   ptr(streamingpb.ContentType_AUDIO_TRACK),
		Interactivity: ptr(streamingpb.Interactivity(3)),
		Timestamp:     ptr(time.Now().Unix()),
	})
	if err != nil {
		return fmt.Errorf("PlayPlay: %w", err)
	}
	engine, err := spotifyclean.New()
	if err != nil {
		return err
	}
	defer engine.Close()
	key, err := engine.Derive(license.RawResponse)
	if err != nil {
		return err
	}
	if err := engine.InitCipher(key); err != nil {
		return err
	}
	format := metadatapb.AudioFile_FLAC_FLAC_24BIT
	resolved, err := sp.ResolveStorageInteractive(ctx, fileID, &format, false)
	if err != nil {
		return err
	}
	if len(resolved.Cdnurl) == 0 {
		return fmt.Errorf("no CDN URL available for the self-test")
	}
	response, err := client.Get(resolved.Cdnurl[0])
	if err != nil {
		return err
	}
	defer response.Body.Close()
	if response.StatusCode != http.StatusOK {
		return fmt.Errorf("CDN HTTP %d", response.StatusCode)
	}
	encrypted := make([]byte, 16)
	if _, err := io.ReadFull(response.Body, encrypted); err != nil {
		return err
	}
	if err := engine.Decrypt(0, encrypted); err != nil {
		return err
	}
	if string(encrypted[:4]) != "fLaC" {
		return fmt.Errorf("self-test did not produce a FLAC header: %x", encrypted)
	}
	fmt.Println("Self-test passed: login, metadata, PlayPlay, and cipher are working")
	return nil
}
