#include <stdio.h>
/**
 * main - Combination of two digits
 * Return: 0 Success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar ((i % 10) + '0');
			putchar ((j % 10) + '0');
			if (i == 8 && j == 9)
				continue;
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
