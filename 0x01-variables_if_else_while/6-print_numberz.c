#include <stdio.h>
/**
 * main - Program that prints 0-9 using putchar
 * Return: 0 Success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
