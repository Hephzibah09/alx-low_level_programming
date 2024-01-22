#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * cap_string - Capitalize all words of a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	if (str == NULL)
		return NULL;

	char *result = strdup(str);
	if (result == NULL)
		return NULL;
	int i;

    if (result[0] >= 'a' && result[0] <= 'z')
    {
	    result[0] -= ('a' - 'A');
    }

    for (i = 1; result[i] != '\0'; i++)
    {
	    if ((result[i - 1] == ' ' || result[i - 1] == '\t' || result[i - 1] == '\n' ||
             result[i - 1] == ',' || result[i - 1] == ';' || result[i - 1] == '.' ||
             result[i - 1] == '!' || result[i - 1] == '?' || result[i - 1] == '"' ||
             result[i - 1] == '(' || result[i - 1] == ')' || result[i - 1] == '{' ||
             result[i - 1] == '}') &&
            (result[i] >= 'a' && result[i] <= 'z'))
	    {
		    result[i] -= ('a' - 'A');
	    }
    }
	return result;
}
