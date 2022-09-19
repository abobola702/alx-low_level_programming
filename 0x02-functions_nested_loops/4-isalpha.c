#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: character to be checked
 * Return: 1 for alpha, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return(0);
}
