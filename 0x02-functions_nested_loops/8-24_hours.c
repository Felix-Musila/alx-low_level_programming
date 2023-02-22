#include "main.h"

/**
 * jack_bauer - A function that prints time
 * Return: Void
 */

void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <=59; min++)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(min / 10);
			_putchar(min % 10);
			_putchar('\n');
		}
	}
}
