#include <stdio.h>

/**
 * main - prints numbers 0 to 9
 * @n - the number variale
 *
 * Return: program returns 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
