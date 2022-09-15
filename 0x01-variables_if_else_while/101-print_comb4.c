#include <stdio.h>

/**
 * main - Combination of 3 digit number
 * Return: 0 Success
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 10; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar ((a % 10) + '0');
				putchar ((b % 10) + '0');
				putchar ((c % 10) + '0');
				if (a == 7)
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
