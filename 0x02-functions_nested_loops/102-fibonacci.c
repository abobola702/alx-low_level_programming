#include <stdio.h>

/**
 * main - Printing fibonacci numbers from 0 to 50
 * Return: 0 Success
 */

int main(void)
{
	int j;
	unsigned long fb1 = 0, fb2 = 1, sum;

	for (j = 0; j < 50; j++)
	{
		sum = fb1 + fb2;
		printf("%lu", sum);
		fb1 = fb2;
		fb2 = sum;
		if (j == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
