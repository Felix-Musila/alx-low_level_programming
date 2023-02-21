#include "main.h"

/**
 * _islower - A function that checks for lowercase characters
 * @c: The character to check
 * Return: 1 if Lowercase
 * Return: 0 if Uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
