#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 * @i: Intergers 0-9
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				_putchar((k * j) + '0');
				
				if (k == 9)
					_putchar('\n');
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
	}
}

		
