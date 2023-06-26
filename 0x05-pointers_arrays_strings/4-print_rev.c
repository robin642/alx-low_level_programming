#include "main.h"

/**
  * print_rev - Prints a string, in reverse
  *
  * @s: reverse string
  *
  * Return: 0 on Success
  */

void print_rev(char *s)

{
		int lengthr = 0;
		int w;

		while (*s != '\0')
		{
			lengthr++;
			s++;
		}
			s--;
			for (w = lengthr; w > 0; w--)
			{
				_putchar(*s);
				s--;
			}
				_putchar('\n');
}
