package main

import (
	"fmt"
)

func main() {
	aValue := new(int)
	x := 5
	//defer fmt.Println(*aValue)
	defer fmt.Println("x: ", x)
	x++
	fmt.Println("type of aValue: %T", aValue)

	for i := 0; i < 100; i++ {
		*aValue++
		x++
		fmt.Println("check aValue: ", *aValue)
	}

}
