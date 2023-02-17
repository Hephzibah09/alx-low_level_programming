#include <stdio.h>

/**
 * main - prints the alphabet in lowercase using putchar
 * @c - the variabe that holds 'a'
 *
 * Return: program returns 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
