#include <stdio.h>

/**
 * main - ENtry point
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i < 67; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
