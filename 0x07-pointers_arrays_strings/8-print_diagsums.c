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
		int robin, sum3 = 0, sum4 = 0;

		for (robin = 0; robin < size; robin++)
		{
			sum3 += a[robin];
			a += size;
		}

		a -= size;

		for (robin = 0; robin < size; robin--)
		{
			sum2 += a[robin];
			a -= size;
		}
			printf("%d, %d\n", sum3, sum4);
}
