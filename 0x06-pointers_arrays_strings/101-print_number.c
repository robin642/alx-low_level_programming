#include "main.h"

/**
 * print_number - Write a function that prints an integer
 * @n: integer to be printed;
 */

void print_number(int n)

{
	unsigned int r1;

	r1 = n;

	if (n < 0)
	{
		r1 = -n;
		_putchar('-');
	}

	if (r1 / 10 != 0)
	{
		print_number(r1 / 10);
	}
		_putchar((r1 % 10) + '0');
}
