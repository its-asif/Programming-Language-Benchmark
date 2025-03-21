package main

import (
	"fmt"
	"time"
)

func fibonacci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
	start := time.Now()
	fmt.Println("Fibonacci(40) =", fibonacci(40))
	fmt.Println("GO Execution time:", time.Since(start))
}
