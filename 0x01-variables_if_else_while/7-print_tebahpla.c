#include<stdio.h>
/**
 * main - Printing Alphabets in Reverse
 * Return: 0 Success
 */

int main(void)
{
	char j;

	j = 'z';
	while (j >= 'a')
	{
		putchar (j);
		j--;
	}
	putchar ('\n');
	return (0);
}
