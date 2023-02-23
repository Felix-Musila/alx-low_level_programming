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
			while (j < 9)
			{
				_putchar((j / 10) + '0');
				j++;
			}
				if (j > 9)
					_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
