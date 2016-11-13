// reset_to_98 - Set argument to 98
package main

import "fmt"

func main() {
	var a int = 0
	reset(&a)
	fmt.Println(a)
}

func reset(a *int) {
	*a = 98
}
