#include <stdio.h>
#define HACKER ?


/**
 * leet - turn aeotl into 43071 respectively
 * @s: string to replace from
 *
 * Description: Don't hate the hacker, hate the code :)
 *
 * Return: Pointer to changed string
 */

char *leet(char *s)
{
	char *temp;

	temp  = s;

	while (*s++)
	{
		(*s == 'a' || *s == 'A') HACKER *s = '4' : 0;
		(*s == 'e' || *s == 'E') HACKER *s = '3' : 0;
		(*s == 'o' || *s == 'O') HACKER *s = '0' : 0;
		(*s == 't' || *s == 'T') HACKER *s = '7' : 0;
		(*s == 'l' || *s == 'L') HACKER *s = '1' : 0;
	}

	return (temp);
}
