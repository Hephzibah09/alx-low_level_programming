#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @n: the integer variable
 *
 * Return: program returns n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (n);
}
