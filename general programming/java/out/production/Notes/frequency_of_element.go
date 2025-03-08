package main

func main() {
	arrs := []int{4, 2, 6, 2, 4, 1, 1}
	arrHash := make([]int, len(arrs))
	for _, arr := range arrs {
		arrHash[arr]++
	}
	for key, val := range arrHash {
		println(key, " : ", val)
	}
}
