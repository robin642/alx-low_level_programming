#include "main.h"

/**
  * _puts_recursion - Write a function that prints a string, new line
  * @s: The input of char
  * Return: 0
  */

void _puts_recursion(char *s)

{
		if (*s)
		{
			_putchar(*s);
			_puts_recursion(s + 1);
		}

		else
			_putchar('\n');
}
