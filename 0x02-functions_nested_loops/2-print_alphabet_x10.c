#include "main.h"
/**
  * print_alphabet_x10 - Prints alphabet 10 times.
  * Return: Always 0 (Success)
  */

void print_alphabet_x10(void)
{
	char letter;
	char lettera;

	for (lettera = 1; letter <= 9; letter++)
	{
		for (lettera = 97; lettera <= 122; lettera++)
		{
			_putchar(lettera);
		}
		_putchar('\n');
	}
}
