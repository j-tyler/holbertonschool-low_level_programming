package main

import "fmt"

// main prints the alphabet both uppercase and lowercase
func main() {
	for r1 := 'a'; r1 <= 'z'; r1++ {
		fmt.Printf("%c", r1)
	}
	for r1 := 'A'; r1 <= 'Z'; r1++ {
		fmt.Printf("%c", r1)
	}
	fmt.Printf("\n")
}
