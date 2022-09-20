#include <stdio.h>

/**
 * print_to_98 - Printing natural numbers to 98
 * @n: starting point
 * Return: nothing
 */

void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
		while (i < 98)
			printf("%d, ", i++);
		printf("%d\n", i);
	}
	else
	{
		while (i > 98)
			printf("%d, ", i--);
		printf("%d\n", i);
	}
}
