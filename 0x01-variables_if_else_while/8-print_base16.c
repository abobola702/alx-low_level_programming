#include <stdio.h>
/**
 * main - Printing Hexadecimal Numbers
 * Return: 0 Success
 */

int main(void)
{
	char a;
	int b;

	b = 0;
	a = 'a';
	while (b < 10)
	{
		putchar ((b % 10) + '0');
		b++;
	}
	while (a <= 'f')
	{
		putchar (a);
		a++;
	}
	return (0);
}
