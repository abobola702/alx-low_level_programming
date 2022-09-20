#include "main.h"

/**
 * print_times_table - Times table of higher numbers
 * @n: Number of the times table
 */

void print_times_table(int n);
{
	int i;
	int j;
	int res;

	for ( i = 0; i <= n; i++)
	{
		if ((n > 15) || (n < 0))
			break;
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			res = j * i;
			if (res <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((res) + '0');
			}
			else if (res <= 99)
			{
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res >= 100)
			{
				_putchar((res / 100) + '0');
				_putchar((res / 10) % 10 + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
