package main

import (
	"fmt"
	"net/http"
	"net"
	"strings"
)

func main() {
	router := InitRoutes()

	server := &http.Server{
		Addr:    "0.0.0.0:8082",
		Handler: router,
	}
	server.ListenAndServe()
}

func InitRoutes() *http.ServeMux {
	//router := mux.NewRouter().StrictSlash(false)
	h := http.NewServeMux()
	// Routes for the User entity
	//router = SetOhnoRouters(router)
	router := SetRouters(h)
	return router
}

func SetRouters(router *http.ServeMux) *http.ServeMux {
	router.HandleFunc("/location", GetLocation)
	return router
}

func GetLocation(w http.ResponseWriter, r *http.Request) {
	addr := getRealAddr(r)
	fmt.Println("ip-addr: ", addr, " location:")
}

func getRealAddr(r *http.Request)  string {

    remoteIP := ""
    // the default is the originating ip. but we try to find better options because this is almost
    // never the right IP
    if parts := strings.Split(r.RemoteAddr, ":"); len(parts) == 2 {
        remoteIP = parts[0]
    }
    fmt.Println("remoteIP:", remoteIP)
    // If we have a forwarded-for header, take the address from there
    if xff := strings.Trim(r.Header.Get("X-Forwarded-For"), ","); len(xff) > 0 {
        addrs := strings.Split(xff, ",")
        lastFwd := addrs[len(addrs)-1]
        if ip := net.ParseIP(lastFwd); ip != nil {
            remoteIP = ip.String()
        }
    // parse X-Real-Ip header
    } else if xri := r.Header.Get("X-Real-Ip"); len(xri) > 0 {
        if ip := net.ParseIP(xri); ip != nil {
            remoteIP = ip.String()
        }
    }

    fmt.Println("remoteIP_1: ", remoteIP)
    return remoteIP

}

