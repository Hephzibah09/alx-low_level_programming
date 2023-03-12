#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * what_is_my_name - function prints the name of its executable file
 * @argc: argument count
 * @*argv: argument vector
 *
 * Return: program returns 0
 */

int what_is_my_name(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
