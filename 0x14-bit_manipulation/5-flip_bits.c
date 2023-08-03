#include <stdio.h>
#include "main.h"

/**
  * flip_bits - The bits you would need to flip
  * @n: The first no
  * @m: The 2nd no
  * Return: The number of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
		int w, amount = 0;
		unsigned long int new;
		unsigned long int brand_new = n ^ m;


		for (w = 63; w >= 0; w--)
		{
			new = brand_new >> w;
			if (new & 1)
				amount++;
		}

		return (amount);
}
