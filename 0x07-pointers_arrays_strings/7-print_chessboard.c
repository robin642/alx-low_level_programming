#include "main.h"

/**
  * print_chessboard - Write a function that prints the chessboard
  * @a: array
  * Return: Always 0 (Success)
  */

void print_chessboard(char (*a)[8])

{
		int r;
		int w;

		for (r = 0; r < 8; r++)
		{
			for (w = 0; w < 8; w++)
				_putchar(a[r][w]);
			_putchar('\n');
		}
}
