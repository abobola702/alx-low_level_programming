#include <stdio.h>
/**
 * main - print numbers in base 16
 *
 * Return: 0 on Sucess
 */
int main(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
		putchar(j);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
