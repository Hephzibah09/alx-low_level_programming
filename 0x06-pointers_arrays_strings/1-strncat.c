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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
