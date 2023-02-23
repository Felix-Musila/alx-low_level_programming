#include <stdio.h>

int main()
{
        int i;
        int j;

        for (i = 1; i < 10; i++)
        {
                for (j = 0; j <= 14; j++)
                {
                        int ones = (j / 10);
                        int tens = ((j % 10) + 10);

                        if (j < 9)
                                putchar(ones + '0');
                        else
                                putchar(tens + '0');
                }
        }
	putchar('\n');
}
