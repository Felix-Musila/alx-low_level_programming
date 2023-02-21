#include "main.h"

/**
 * print_sign - a function that checks and prints the sign of n
 * @n: The number to be checked
 * Return: 1 if +, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
