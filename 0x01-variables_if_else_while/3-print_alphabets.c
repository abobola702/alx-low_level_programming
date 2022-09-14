#include<stdio.h>
/**
 * main - Printing uppercase alphabet
 * Return: 0 Success
 */

int main(void)
{
	char a;
	char b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar (a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar (b);
		b++;
	}
	putchar ('\n');
	return (0);
}
