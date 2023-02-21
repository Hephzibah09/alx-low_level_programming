#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)/* loop for the hours */
	{
		for (min = 0; min < 60; min++)/* loop for the minutes */
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
