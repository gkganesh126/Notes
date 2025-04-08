package main

import (
	"fmt"
	"math/rand"
)

func main() {
	var gameBoard [3][3]int
	var input, row, col int
	prevInput := 3

	for i := 0; i < 3; i++ {
		for j := 0; j < 3; j++ {
			gameBoard[i][j] = rand.Int()
		}
	}

	for i := 0; i < 7; i++ {
		fmt.Println("Enter 1 or 0")
		fmt.Scanln(&input)
		if input == prevInput {
			fmt.Println("wrong input")
			return
		}
		prevInput = input
		fmt.Println("Enter position: ")
		fmt.Scanln(&row, &col)
		gameBoard[row][col] = input

		/* 0	1	2
		0 00	01	02
		1 10	11	12
		2 20	21	22
		*/

		if gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2] {
			fmt.Println(gameBoard[0][0], " is winner")
			return
		} else if gameBoard[2][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[0][2] {
			fmt.Println(gameBoard[2][0], " is winner")
			return
		} else if gameBoard[0][0] == gameBoard[0][1] && gameBoard[0][1] == gameBoard[0][2] {
			fmt.Println(gameBoard[0][0], " is winner")
			return
		} else if gameBoard[0][0] == gameBoard[1][0] && gameBoard[1][0] == gameBoard[2][0] {
			fmt.Println(gameBoard[0][0], " is winner")
			return
		} else if gameBoard[1][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[1][2] {
			fmt.Println(gameBoard[1][0], " is winner")
			return
		} else if gameBoard[2][0] == gameBoard[2][1] && gameBoard[2][1] == gameBoard[2][2] {
			fmt.Println(gameBoard[1][0], " is winner")
			return
		} else if gameBoard[0][1] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][1] {
			fmt.Println(gameBoard[0][1], " is winner")
			return
		} else if gameBoard[0][2] == gameBoard[1][2] && gameBoard[1][2] == gameBoard[2][2] {
			fmt.Println(gameBoard[0][2], " is winner")
			return
		}

	}
}
