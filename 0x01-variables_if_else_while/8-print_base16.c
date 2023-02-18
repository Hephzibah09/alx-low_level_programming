#include <stdio.h>

/**
 * main - prints all the numbers in base 16
 * @n - number variable
 * @c - character variable
 *
 * Return: program returns zero
 */

int main(void)
{
	int n;
	char c;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
