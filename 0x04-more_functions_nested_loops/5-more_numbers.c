#include "main.h"

/**
 * more_numbers - Function that prints number 0 to 14 ten times
 * Return: Void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int ones = (j / 10);
			int tens = ((j % 10) + 10);

			while (j <= 9)
			{
				_putchar(ones + '0');
				j++;
			}
			while (j > 9)
			{
				_putchar(tens + '0');
				j++;
			}
		}
	}
	_putchar('\n');
}
