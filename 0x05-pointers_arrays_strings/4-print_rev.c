#include "main.h"

/**
 * print_rev - program prints the reverse of a string
 * @s: poinyer to the string
 */

void print_rev(char *s)
{
	int i,j;

	for (i = 0; s[i] != '\0'; i++)
		j = j + 1;
	for (; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
