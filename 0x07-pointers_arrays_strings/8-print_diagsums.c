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
		int r, w, add1 = 0, add2 = 0;

		for (r = 0; r <= (size * size); r = r + size + 1)
		{
			add1 = add1 + a[r];
		}
		for (w = size - 1; w <= (size * size) - size; w = w + size - 1)
		{
			add2 = add2 + a[w];
		}
			printf("%d, %d\n", add1, add2);
}
