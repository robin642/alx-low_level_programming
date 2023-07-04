#include "main.h"
#include <unistd.h>

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */
int _putchar(char c);
void print_number(int n)
{
	unsigned int sum1;

	sum1 = n;

	if (n < 0)
	{
		_putchar('-');
		sum1 = -n;
	}

	if (sum1 / 10 != 0)
	{
		print_number(sum1 / 10);
	}
		_putchar((sum1 % 10) + '0');
	
}
