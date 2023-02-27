#include "main.h"

/**
 * print_rev - program prints the reverse of a string
 * @s: poinyer to the string
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
