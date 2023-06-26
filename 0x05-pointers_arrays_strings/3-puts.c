#include "main.h"

/**
  * _puts - Write a function that prints a string, a new line, to stdout
  *
  * @str: Prints string
  */

void _puts(char *str);

{

		while (*str != '\0')
		{

			_putchar(*str++);

		}

			_putchar('\n');

}
