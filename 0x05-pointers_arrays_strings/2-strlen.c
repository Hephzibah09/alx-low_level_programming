#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: pointer to the string
 *
 * Return: program returns the length of the string
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j += 1;
	}
	return (j);
}
