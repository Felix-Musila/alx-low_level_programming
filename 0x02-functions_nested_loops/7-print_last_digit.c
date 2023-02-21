#include "main.h"

/**
 * print_last_digit - Entry point
 * Return: Last digit
 */

int print_last_digit(int i)
{
	if (i <= 9)
	{
		_putchar(i);
	return(i);
	}
	else
	{
		_putchar(i % 10);
	return(i % 10);
	}
}
