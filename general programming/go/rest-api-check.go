package router

import (
    // Uncomment below imports as needed
    "fmt"
    // "encoding/json"
     "net/http"

    // "github.com/codility/rest_api_go/database"
    "github.com/gorilla/mux"
)

type User struct {
  ID   int    `json:"id"`
  Name string `json:"name"`
  Role string `json:"role"`
}

func Handler(w http.ResponseWriter, req * http.Request) {
    fmt.Println("hello")

  user := [...]User {[
  {
    "id": 1,
    "name": "John",
    "role": "admin"
  },
  {
    "id": 2,
    "name": "Juan",
    "role": "developer"
  }
]}
w.Header().Set("Content-Type", "application/json")
	w.WriteHeader(http.StatusOK)
	w.Write(user)
}
func Router() *mux.Router {
    r := mux.NewRouter()
    // Register you route here

    r.HandleFunc("/users", Handler)

    return r
}
func main()