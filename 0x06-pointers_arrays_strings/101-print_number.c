#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	unsigned int r1;

	if (r1 < 0)
	{
		r1 = -n;
		_putchar('-');
	} else
	{
		r1 = n;
	}

	if (r1 / 10)
		print_number(r1 / 10);

	_putchar((r1 % 10) + '0');
}
