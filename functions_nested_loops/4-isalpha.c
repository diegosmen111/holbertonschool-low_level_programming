#include "main.h"
/**
 * _isalpha - Shiws 1 of the imput is lowercase or uppercase
 * Another cases, shows 0
 *
 * @c: The charactee in ASCII code
 *
 * Return: 1 for letters. Returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
