#include <stdio.h>
#include "main.h"

/**
  * get_bit - A bit at a given index
  * @n: The value
  * @index: Starting 0
  * Return: index or -1
  */

int get_bit(unsigned long int n, unsigned int index)

{
		unsigned long int bits = 1UL << index;

		if (index >= sizeof(unsigned long int) * 8)
		{
			return (-1);
		}

		if (n & bits)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
