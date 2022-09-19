#include "main.h"

/**
 * main - Printing alphabets
 *
 * Return: 0 Success
 */

int main(void)
{
	char a;
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
