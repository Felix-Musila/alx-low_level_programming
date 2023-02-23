#include "main.h"

/**
 * print_most_numbers - Function that prints 0-9 except 2 & 4
 * Return: Void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			continue;
		else
		{
			_putchar(i + '0');
			i++;
		}
	}
	_putchar('\n');
}
