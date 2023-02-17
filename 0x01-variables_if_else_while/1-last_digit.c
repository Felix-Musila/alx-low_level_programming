#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 Success
 * */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Checks last digit of n */
	
	l = n % 10;

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5, n, l\n");

	else if(l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0, n, l\n");
	
	else
		("Last digit of %d is %d and is 0, n, l\n");

	return (0);
}

