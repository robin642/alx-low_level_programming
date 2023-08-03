#include <stdio.h>
#include "main.h"

/**
  * set_bit - A  bit to 1 at a given index
  * @n: The bit
  * @index: Starting 0
  * Return: If 1 if it worked, or -1 if an error occurred
  */

int set_bit(unsigned long int *n, unsigned int index)

{
		unsigned long int robin = 1UL << index;

		*n |= robin;

		if (index >= sizeof(unsigned long int) * 8)
		{
			return (-1);
		}

		return (1);
}
