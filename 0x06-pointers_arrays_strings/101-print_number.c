#include "main.h"

/**
 * print_number - Write a function that prints an integer
 * @n: integer to be printed;
 */

void print_number(int n)

{
	unsigned int r;

	r = n;

	if (n < 0)
	{
		r = -n;
		_putchar('-');
	} 
	if (r / 10 != 0)
	{
		print_number(r / 10);
	}
		_putchar((r % 10) + '0');
}
