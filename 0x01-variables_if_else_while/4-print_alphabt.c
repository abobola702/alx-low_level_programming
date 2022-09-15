#include<stdio.h>
/**
 * main - printing alphabet withot q and e
 * Return: 0 Success
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar (a);
		a = a + 1;
	}
	putchar ('\n');
	return (0);
}

