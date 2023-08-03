#include "main.h"

/**
 * get_endianness - It checks if a machine
 * Return: 0 or 1
 */

int get_endianness(void)

{
		unsigned int w = 1;
		char *d = (char *) &w;

		return (*d);
}
