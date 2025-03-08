package main

import (
	"fmt"

	"github.com/NaySoftware/go-fcm"
)

const (
	serverKey = "AAAAJkr-MoU:APA91bHnp8y1ikv0_eNgYV6-8zsqD08XN-dvWw7HjgkRapdBYdwj64QmgZhl8vbFTsR0BmOxZ9vc-sCx2bm4pK5MrFbYGnpq2X57JPy7gePPqbSOINIIj-8-wMchj6kQMXH1ycm3vX4S"
	topic     = "/topics/5fa18788f160a97871966a1b"
)

func main() {

	data := map[string]string{
		"msg": "Hello World1",
		"sum": "Happy Day",
	}

	c := fcm.NewFcmClient(serverKey)
	c.NewFcmMsgTo(topic, data)

	status, err := c.Send()

	if err == nil {
		status.PrintResults()
	} else {
		fmt.Println("error:", err)
	}

}
