#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)

{
		int r, w;
			for (r = 0; r <= 9; r++)
			{
			if (r <= s)
				printf("%02x", c[l * 10 + r]);
			else
				printf("  ");
			if (r % 2)
				putchar(' ');
			}
			for (w = 0; w <= s; w++)
			{
			if (c[l * 10 + w] > 31 && c[l * 10 + w] < 127)
				putchar(c[l * 10 + w]);
			else
				putchar('.');
			}
}

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
