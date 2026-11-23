package main

import "testing"

func TestSafeNameForOS(t *testing.T) {
	tests := []struct {
		input, goos, expected string
	}{
		{"Artist: Title", "linux", "Artist: Title"},
		{"Artist: Title", "windows", "Artist_ Title"},
		{"A/B\\C", "windows", "A_B_C"},
		{"CON.flac", "windows", "_CON.flac"},
		{"LPT9", "windows", "_LPT9"},
		{"COM0", "windows", "COM0"},
		{"normal", "windows", "normal"},
		{"...", "windows", "Unknown"},
	}
	for _, test := range tests {
		if actual := safeNameForOS(test.input, test.goos); actual != test.expected {
			t.Errorf("safeNameForOS(%q, %q) = %q, expected %q", test.input, test.goos, actual, test.expected)
		}
	}
}
