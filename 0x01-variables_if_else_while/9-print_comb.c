#include <stdio.h>

/**
 * main - A progam that prints number combinations
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
