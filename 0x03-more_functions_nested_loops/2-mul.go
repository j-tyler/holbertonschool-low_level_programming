package main

import "fmt"

// main tests out our function mul that multiplies two numbers
func main() {
	var a int = 5;
	var b int = 4;
	fmt.Println(mul(a, b))	
}

// mul multiplies the two arguments and returns the result
func mul(a int, b int) int {
	return (a*b)
}
