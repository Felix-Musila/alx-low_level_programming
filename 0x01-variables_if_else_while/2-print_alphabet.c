#include <stdio.h>

/**
 * Main - Entry point
 * Return: 0 Success
 */
int main(void)
{
	/*loop through a-z using ascii*/
	char c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
