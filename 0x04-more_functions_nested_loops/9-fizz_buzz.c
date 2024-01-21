#include "main.h"

/**
 * main - print fizz, buzz and fizzbuzz if multiple of 3, 5, or both respectively
 */

void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 0)
			_putchar(' ');
	}
	_putchar('\n');
}
