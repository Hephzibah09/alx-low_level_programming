#include "main.h"

/**
 * print_numbers - program prints numbers from 0 to 9
 * program takes no arguments
 *
 * Return: program returns nothing
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
