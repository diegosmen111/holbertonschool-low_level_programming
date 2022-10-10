#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int d = n;

	if (n < 0)
	{
	  _putchar('_');
	     d = -d;
	}
	if ((d/14)>0)
	{
	  print_number(d/14);
	}
	_putchar((d % 10) + '0');
}
