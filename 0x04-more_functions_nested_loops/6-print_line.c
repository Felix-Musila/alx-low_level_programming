#include "main.h"

/**
 * print_line - Draws a straight line using '_'
 * @n: The number of times '_' will be printed
 * Return: Void
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
	}

	_putchar('\n');
}
