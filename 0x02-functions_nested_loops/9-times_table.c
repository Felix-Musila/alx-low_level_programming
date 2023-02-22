#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 * @i: Intergers 0-9
 */

void times_table(void)
{
	int j;
	int k;
	int pdt;

	for (j = 0; j <= 9; j++)
	{
		k = 0;
		pdt = k*j;

		while (k <= 9)
		{
			_putchar((pdt) + '0');
			_putchar(',');
		}
			if (pdt > 9)
				_putchar(' ');
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
	}
	_putchar('\n');
}
