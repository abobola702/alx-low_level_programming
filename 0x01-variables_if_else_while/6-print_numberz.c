#include<stdio.h>
/**
 * main - printing numbers with putchar
 * Return: 0 Success
 */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar ((i % 10) + '0');
		i++;
	}
	return (0);
}
