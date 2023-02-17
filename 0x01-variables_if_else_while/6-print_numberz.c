#include <stdio.h>
#include <stdlib.h>

/**
 * main - return single integer from 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
