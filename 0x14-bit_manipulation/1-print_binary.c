#include <stdio.h>
#include "main.h"

/**
  * print_binary - Prints  binary representation of a number
  * @n: The binary
  * Return: Binary number
  */

void print_binary(unsigned long int n)

{
		int w = 0; 
		int amount = 0;
		unsigned long int robin;

	for (w = 63; w >= 0; w--)
	{
		robin = n >> w;

		if (robin & 1)
		{
			putchar('1');
			amount++;
		}
		else if (amount)
			putchar('0');
	}
	if (!amount)
		putchar('0');
}
