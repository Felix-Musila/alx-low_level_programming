#include "main.h"

/**
 * print_most_numbers - Function that prints 0-9 except 2 & 4
 * Return: Void
 */

void print_most_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
		_putchar(i + '0');
	}
	_putchar('\n');
}
