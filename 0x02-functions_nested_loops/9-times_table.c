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
		for (j = 0; j <= 9; j++)
		{
			a = j * i;
			if (a < 10)
			{
				_putchar(' ');
				_putchar((a) + '0');
				if (j >= 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (j >= 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
