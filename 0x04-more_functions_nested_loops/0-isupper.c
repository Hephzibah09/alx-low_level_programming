#include "main.h"

/**
 * _isupper - checks if an alphabet is in upper case
 * @c: variable holding the character
 *
 * Return: program returns 1 if c is uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
