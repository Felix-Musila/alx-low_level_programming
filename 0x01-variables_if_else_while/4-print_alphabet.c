#include <stdio.h>
/**
 * main - A program that prints lower case alphabet except q and e
 * Return: 0 Success
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		if (c == 101 || c == 113)
			;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
