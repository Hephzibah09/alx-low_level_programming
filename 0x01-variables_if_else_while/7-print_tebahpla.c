#include <stdio.h>

/**
 * main - prints the lowecase alphabets in reverse
 * @c - the character variable
 *
 * Return: program returns zero
 */

int main(void)
{
	char c = 'z';

	for (c; c <= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
