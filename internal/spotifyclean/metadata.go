package spotifyclean

import (
	_ "embed"
	"encoding/json"
)

//go:embed client.json
var clientMetadataJSON []byte

type ClientMetadata struct {
	ClientVersion   string `json:"client_version"`
	AppVersion      string `json:"app_version"`
	PlayPlayVersion int32  `json:"playplay_version"`
	PlayPlayToken   string `json:"token"`
}

func ReadClientMetadata() (ClientMetadata, error) {
	var metadata ClientMetadata
	if err := json.Unmarshal(clientMetadataJSON, &metadata); err != nil {
		return metadata, err
	}
	return metadata, nil
}
