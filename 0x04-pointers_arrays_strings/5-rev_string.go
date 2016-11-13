//Reverse a string
package main

import "fmt"

func main() {
	var s string = "Holberton f̅ bròwn School"
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

// Another option, still doesn't preserve all unicode
func rev_string2(s *string) {
	r := []rune(*s)
	for i, j := 0, len(r) - 1; i < len(r)/2; i , j = i + 1, j - 1 {
		r[i], r[j] = r[j], r[i]
	}
	*s = string(r)
}
