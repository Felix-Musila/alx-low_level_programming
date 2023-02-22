#include "main.h"

/**
 * print_last_digit - Entry point
 * @i: The number to check
 * Return: Last digit
 */

int print_last_digit(int i)
{
	int last_num = (i % 10);

	if (last_num < 0)
		last_num = last_num * -1;
	
	_putchar(last_num + '0')
	return (last_num);
}
