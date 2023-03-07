#include "main.h"

/**
 * _memset - program fills empty memory with a constant byte
 * @s: pointer to memory
 * @b: char variable that holds the bytes the would be used to fill memory
 * @n: numbers of memory byte to be filled
 *
 * Return: program will return pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
