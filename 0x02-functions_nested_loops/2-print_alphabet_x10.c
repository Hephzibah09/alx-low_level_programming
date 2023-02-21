#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase followed by a newline
 * ten times
 * @n - keeps track of the number of lines
 * @c - holds the letters of the alphabet
 */

void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
