#include <stdio.h>

/**
 * main - prints the alphabet in lower case excluding q and e
 * @c - variable to hold characters
 *
 * Return: program returns 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
