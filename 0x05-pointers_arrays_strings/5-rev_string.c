#include "main.h"

/**
 * rev_string - program reverses a string
 * @s: pointer to string
 */

void rev_string(char *s)
{
	char rev = s[0];
	/*int counter = 0;*/
	int i, j, l = 0;

	while (s[l] != '\0')
	l++;

	j = l / 2;


	for (i = 0; i < j; i++)
	{
		/*counter--;*/
		l--;
		rev = s[i];
		s[i] = s[l];
		s[l] = rev;
	}
}

