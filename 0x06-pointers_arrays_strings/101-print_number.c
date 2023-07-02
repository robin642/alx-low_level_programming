#include "main.h"
#include <stdio.h>

/**
 * print_number - Write a function that prints an integer
 * @n: integer to be printed
 * Return: 0
 */

void print_number(int n)

{
	unsigned int s2;

	s2 = n;

	if (n < 0)
	{
		s2 = -n;
		putchar('-');
	}

	if (s2 / 10 != 0)
	{
		print_number(s2 / 10);
	}
		_putchar((s2 % 10) + '0');
}
