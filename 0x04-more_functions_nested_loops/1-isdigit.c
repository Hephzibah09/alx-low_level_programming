#include "main.h"

/**
 * _isdigit - checks to see if character is an integer
 * @c: character
 *
 * Return: program returns 1 if character is digit and 0 if otherwise.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
