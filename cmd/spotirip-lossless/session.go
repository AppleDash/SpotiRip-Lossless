package main

import (
	"context"
	"fmt"
	"net/http"

	librespot "github.com/devgianlu/go-librespot"
	devicespb "github.com/devgianlu/go-librespot/proto/spotify/connectstate/devices"
	"github.com/devgianlu/go-librespot/session"
)

func openSession(ctx context.Context, options cliOptions) (*session.Session, *http.Client, error) {
	stored, exists, err := loadCredentials(options.credentialPath)
	if err != nil {
		return nil, nil, err
	}
	var auth any
	if exists {
		auth = session.StoredCredentials{Username: stored.Username, Data: stored.Data}
	} else {
		auth = session.DeviceAuthCredentials{OnCode: func(code *session.DeviceAuthCode) {
			if code != nil {
				fmt.Printf("Open this URL to sign in: %s\nCode: %s\n", code.VerificationUrl, code.UserCode)
			}
		}}
	}
	client := librespot.NewHttpClient()
	sess, err := session.NewSessionFromOptions(ctx, &session.Options{
		Log:         &librespot.NullLogger{},
		DeviceType:  devicespb.DeviceType_COMPUTER,
		DeviceId:    stored.DeviceID,
		Credentials: auth,
		Client:      client,
	})
	if err != nil {
		return nil, nil, fmt.Errorf("Spotify login: %w", err)
	}
	if !exists {
		stored.Username = sess.Username()
		stored.Data = sess.StoredCredentials()
		if err := stored.save(options.credentialPath); err != nil {
			sess.Close()
			return nil, nil, fmt.Errorf("saving credentials: %w", err)
		}
	}
	fmt.Printf("Signed in as %s\n", sess.Username())
	return sess, client, nil
}
