#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line
 * @n: starting integer
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%d", n);
	while (n != 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (n > 98)
			n--;
		else
			n++;
	}
}
