#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string
 * Return: The length of @str
 */

int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
