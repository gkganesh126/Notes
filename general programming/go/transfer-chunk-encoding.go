package main

import (
	"net/http"
	"fmt"
	"time"
	"log"
)
func main() {
  http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
    flusher, ok := w.(http.Flusher)
    if !ok {
      panic("expected http.ResponseWriter to be an http.Flusher")
    }
    w.Header().Set("X-Content-Type-Options", "nosniff")
    for i := 1; i <= 10; i++ {
      fmt.Fprintf(w, "Chunk #%d\n", i)
      flusher.Flush() // Trigger "chunked" encoding and send a chunk...
      time.Sleep(500 * time.Millisecond)
    }
  })

  log.Print("Listening on localhost:8080")
  log.Fatal(http.ListenAndServe(":8080", nil))
}
