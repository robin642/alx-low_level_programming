#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)

{

		int r;
			for (r = 0; r <= (size - 1) / 10 && size; r++)
			{
				printf("%08x: ", r * 10);
				if (r < size / 10)
			{
				print_line(b, 9, r);
			}
				else
			{
				print_line(b, size % 10 - 1, r);
			}
				putchar('\n');
			}
				if (size == 0)
				putchar('\n');
}
