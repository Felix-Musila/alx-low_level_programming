#include "main.h"

/**
 * main - A program that prints _putchar
 * Return: 0 Success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; c[i]; i++)
		_putchar(c[i]);

	_putchar('\n');
	return (0);
}
