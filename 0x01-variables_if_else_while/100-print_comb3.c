#include <stdio.h>

/**
 * main - prints all possible combinations of two digits in ascending order.
 * only the smallest combination of both numbers is printed
 * and both digits can never be the same
 * @tens - first digit
 * @unit - second digit
 *
 * Return: program returns zero
 */

int main(void)
{
	int tens;
	int unit;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			if ((tens != unit) && (tens < unit))
			{
				putchar(tens);
				putchar(unit);

				if (!(unit == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
