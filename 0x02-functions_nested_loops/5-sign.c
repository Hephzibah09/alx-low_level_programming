#include "main.h"

/**
 * print_sign - checks if a number is positive or negative and prints its
 * appropriate sign
 * @n: integer variable
 *
 * Return: 1 for +ve, 0 for number zero(0) and -1 for -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
