#include "main.h"

/**
 * print_last_digit - Entry point
 * Return: Last digit
 */

int print_last_digit(int i)
{
	if (i <= 9)
		return(i + i);
	else
		return((i % 10) + (i % 10));
}
