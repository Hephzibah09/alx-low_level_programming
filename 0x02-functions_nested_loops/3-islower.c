#include "main.h"

/**
 *  _islower - checks if a character is lowercase or not
 *  @c - the variable that holds the character
 *
 *  Return: program returns 1 if c is lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
