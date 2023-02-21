#include "main.h"

/**
 * _abs - A function that computes the absolute value of i
 * @i: The integer to be checked
 * Return: 0 Success
 */

int _abs(int i)
{
	if (i >= 0)
		_putchar(i);
	else
		_putchar(i * -1);
	return (0);
}
