#include<stdio.h>
/**
 * main - printing alphabets
 * Return: 0 Success
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	putchar('\n');
	return (0);
}
