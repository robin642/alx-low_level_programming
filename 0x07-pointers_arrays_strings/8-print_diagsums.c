#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - sum of the two diagonals of a square matrix of integers
  * @a: The input
  * @size: The input
  * Return: 0
  */

void print_diagsums(int *a, int size)

{
		int robin, add1 = 0, add2 = 0;

		for (robin = 0; robin < size; robin++)
		{
			add1 += a[robin];
			a += size;
		}

		for (robin = 0; robin < size; robin++)
		{
			add2 += a[robin];
			a -= size;
		}
			_putchar("%d, %d\n", add1, add2);
}
