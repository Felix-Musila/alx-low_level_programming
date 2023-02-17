#include <stdio.h>

/**
 * main - Entry
 * Return: 0 Success
 */
int main(void)
{
	/*print alphabet in lower and upper case using putchar*/
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (u = 'A'; u <= 'Z'; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
