// print a string in reverse
package main

import "fmt"

func main() {
	var s string = "Holberton 狐 School"
	print_rev2(s)
}

func print_rev(s string) {
	if (len(s) > 0) {
		fmt.Printf(s[len(s)-1:])
		print_rev(s[0:len(s)-1])
	} else {
		fmt.Println()
	}
}

// But if we want to be able to print unicode: this implemention works
func print_rev2(s string) {
	defer fmt.Println()
	for _, c := range s {
		defer fmt.Printf("%c", c)
	}
}

