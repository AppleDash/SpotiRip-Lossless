package main

import (
	"context"
	"errors"
	"fmt"
	"net/http"
	"time"
)

type httpStatusError struct {
	StatusCode int
}

func (e *httpStatusError) Error() string { return fmt.Sprintf("HTTP %d", e.StatusCode) }

func retryableError(err error) bool {
	var status *httpStatusError
	if errors.As(err, &status) {
		return status.StatusCode == http.StatusRequestTimeout || status.StatusCode == http.StatusTooManyRequests || status.StatusCode >= 500
	}
	return true
}

func doWithRetry(ctx context.Context, client *http.Client, request *http.Request) (*http.Response, error) {
	var lastErr error
	for attempt := 0; attempt < 3; attempt++ {
		if attempt > 0 {
			timer := time.NewTimer(time.Duration(attempt) * 500 * time.Millisecond)
			select {
			case <-ctx.Done():
				timer.Stop()
				return nil, ctx.Err()
			case <-timer.C:
			}
		}
		response, err := client.Do(request)
		if err == nil {
			if !retryableError(&httpStatusError{StatusCode: response.StatusCode}) || attempt == 2 {
				return response, nil
			}
			response.Body.Close()
			err = &httpStatusError{StatusCode: response.StatusCode}
		}
		lastErr = err
		if ctx.Err() != nil {
			return nil, ctx.Err()
		}
		if !retryableError(err) {
			break
		}
	}
	return nil, lastErr
}
