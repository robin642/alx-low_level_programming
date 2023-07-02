#include "main.h"

/**
 * print_number - Write a function that prints an integer
 * @n: integer to be printed
 * Return: 0
 */

void print_number(int n)

{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
		_putchar((n1 % 10) + '0');
}
