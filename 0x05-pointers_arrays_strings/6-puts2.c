#include "main.h"

/**
  * puts2 - Write a function that prints every other character of a string,
  * starting with the first character, followed by a new line
  *
  * @str: numbers
  *
  * Return: 0 success
  */

void puts2(char *str)

{
		int lengthr = 0;
		int r = 0;
		char *d = str;
		int w;

		while (*d != '\0')
		{
			d++;
			lengthr++;
		}
			r = lengthr - 1;
			for (w = 0; w <= r; w++)
		{
			if (w % 2 == 0)
		{
			_putchar(str[w]);
		}
		}
			_putchar('\n');
}
