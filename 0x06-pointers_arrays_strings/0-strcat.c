#include "main.h"

/**
 * _strcat - function appends second string to the end of the first string
 * @dest: destination or first string
 * @src: the string that would be appended
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, l;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; src[j] != '\0'; j++)
	;

	for (l = 0; l <= j; l++)
	{
		dest[i + l] = src[l];
	}

	return (dest);
}
