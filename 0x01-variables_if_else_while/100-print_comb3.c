#include <stdio.h>

/**
 * main - A program that prints all possible dff digit combos
 * Return: 0 Success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i)
				continue;
			else
				putchar('0' + i);
				putchar('0' + j);
			if (i == 8 && j==9)
				continue;
			else
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
