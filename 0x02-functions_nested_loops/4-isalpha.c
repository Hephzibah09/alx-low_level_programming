#include "main.h"

/**
 * _isalpha - ascertain if a letter is uppercase, lowercase or neither
 * @c: variable containing the letter
 *
 * Return: program returns 1 if c is a letter (lowercase or uppercase)
 * and 0 if it is not a letter
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}	
