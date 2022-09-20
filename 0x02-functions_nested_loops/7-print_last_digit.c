#include "main.h"

/**
 * print_last_digit - Printing the last digit of a number
 * @n: Number to be checked
 * Return: The last digit of the number checked
 */

int print_last_digit(int n)
{
	int j;

	j = n % 10;
	_putchar(j + '0');
	return (j);
}
