#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case followed
 * by a new line
 * @c - holds the character variable each time the loop is iterated
 *
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
