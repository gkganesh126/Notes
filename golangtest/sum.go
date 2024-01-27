package main

import (
	"fmt"
)

// array contains value of stock prices
//i th index stock price of ith day
//purchase stock first then only we can sell it
//max profit
func main() {

	arr := []int{3, 4, 5, 3, 4}
	for i := 0; i < len(arr); i++ {
		for j := 0; j < len(arr); j++ {
			for k := i; k >= i && k <= j; k++ {
				fmt.Print(arr[k], " ")
			}
			fmt.Println()
		}
	}
	//fmt.Println(arr[2])

	/*
		ch := make(chan int, 5)
		go produce(ch)
		go consume(ch)
		time.Sleep(5 * time.Second)
	*/
}
func produce(ch chan int) {
	ch <- 5
	ch <- 6
}
func consume(ch chan int) {
	fmt.Println(<-ch)
}

func Sum(x, y int) int {
	return x + y
}
