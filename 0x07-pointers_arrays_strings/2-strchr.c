#include "main.h"

/**
 * _strchr - program locates first occurence of any character passed
 * @s: pointer to the string we are going to search through
 * @c: character we are searching for
 *
 * Return: program returns pointer to the location of the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	i++;
	return (&s[i]);
}
