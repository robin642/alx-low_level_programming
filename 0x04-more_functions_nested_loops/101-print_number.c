#include "main.h"
#include <unistd.h>

/**
  * print_number - Print an integer
  * @n: Integer to be printed
  * Return: Nothing!
  */

void print_number(int n)

{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}
		if (n1 / 10)
	{
			print_number(n1 / 10);
	}
		_putchar((n1 % 10) + '0');
}
