package main

import (
	"fmt"
	"time"
	"4d63.com/tz"
)

func main() {
	loc, err := tz.LoadLocation("Europe/Budapest")
	if err != nil {
		panic(err)
	}
	fmt.Println("loc:", loc)
	t := time.Now().In(loc)
	nice := t.Format("15:04")

	fmt.Println("timeNow:", time.Now())
	fmt.Println(time.Now().UTC().Format("15:04"), nice)

	loc, err = tz.LoadLocation("Asia/Kolkata")
	if err != nil {
		panic(err)
	}
	fmt.Println("loc:", loc)
	t = time.Now().In(loc)
	nice = t.Format("15:04")
	fmt.Println(time.Now().UTC().Format("15:04"), nice)
}

