#include <stdio.h>
#include "main.h"

/**
  * clear_bit - The value of a bit to 0
  * @n: The pointer
  * @index: Starting 0
  * Return: If 1 if it worked, or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)

{
		if (index > 63)

			return (-1);

		*n = (~(1Ul << index) & *n);

			return (1);
}
