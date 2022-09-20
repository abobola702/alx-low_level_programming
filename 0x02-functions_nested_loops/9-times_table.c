#include "main.h"

/**
 * times_table - Multiplication table of 9
 */

void times_table(void)
{
	int i;
	int j;
	int a;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			a = j * i;
			if (a < 10)
			{
				_putchar(' ');
				_putchar((a) + '0');
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
