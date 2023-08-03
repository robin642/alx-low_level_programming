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
		if (index > 63)

			return (-1);

		*n = ((1UL << index) | *n);

				return (1);
}
