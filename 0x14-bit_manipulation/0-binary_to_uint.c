#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - It converts a binary number
  * @b: Is pointing to a string
  * Return: 0 or 1
  */

unsigned int binary_to_uint(const char *b)

{
		unsigned int test = 0;

		if (b == NULL)
			return (0);

		while (*b != '\0')
		{
			if (*b != '0' && *b != '1')
				return (0);

			test = (test << 1) + (*b - '0');
			b++;
		}

		return (test);
}
