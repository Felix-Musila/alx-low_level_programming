#include <stdio.h>

/**
 * main - A program that prints all dff combos of 3 digits
 * Return: 0 Success
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i == j && j == k)
					continue;
				if (j >= k || i >= k || i >= j)
					continue;
				else
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
				}
				if (i == 7 && j == 8 && k == 9)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
