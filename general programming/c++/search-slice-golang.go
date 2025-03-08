package main

import (
	"fmt"
)

func main_2() {
	slice1 := []int{1, 2, 3, 4, 5}
	elementToSearch := 3
	flag := false

	for _, sl := range slice1 {
		if sl == elementToSearch {
			flag = true
			break
		}
	}
	if flag {
		fmt.Println("Element ", elementToSearch, " is found")
	} else {
		fmt.Println("Element ", elementToSearch, " is not found")
	}
}
