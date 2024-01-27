package main

import (
	"fmt"
	"testing"
)

func TestSum(t *testing.T) {
	expected := 5
	got := Sum(2, 3)
	if got != expected {
		fmt.Println("test case fail")
	}
}
