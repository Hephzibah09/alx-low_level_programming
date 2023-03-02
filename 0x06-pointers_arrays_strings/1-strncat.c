#include "main.h"

/**
 * _strncat - function appends n bytes of the second string onto
 * the first string
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of characters to append
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; j <= n; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
