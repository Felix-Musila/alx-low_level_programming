#include "main.h"

/**
 * more_numbers - Function that prints number 0 to 14 ten times
 * Return: Void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int tens = ((j % 10) + 10);

			if (j < 9)
				_putchar(j + '0');
			else
				_putchar(tens + '0');
		}
		_putchar('\n');
	}
}
