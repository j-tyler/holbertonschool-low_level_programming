//Reverse a string
package main

import "fmt"

func main() {
	var s string = "Holberton adf̅ School"
	fmt.Println(s)
	rev_string(&s)
	fmt.Println(s)
}

// This doesn't preserve the position of the overdash
func rev_string(s *string) {
	r := make([]rune, len(*s))
	for i, c := range *s {
		r[len(*s) - 1 - i] = c
	}
	*s = string(r)
}
