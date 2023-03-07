#innclude "main.h"

/**
 * _memcpy - copies memory byte from source to destination
 * @dest: pointer to destination bytr
 * @src: pointer to the source string
 * @n: number of memory byte to copy
 *
 * Return: program returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
