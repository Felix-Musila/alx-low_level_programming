#include "main.h"

/**
 * _islower - A function that checks for lowercase characters
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
