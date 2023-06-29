#include "main.h"

/**
  * reverse_array - Reverses the content of an array of integers
  * @a: The array
  * @n: The number elements in array
  * Return: void 0
  */

void reverse_array(int *a, int n)

{
		int r;
		int w;

			for (r = 0; r < n--; r++)
			{
				w = a[r];
				a[r] = a[n];
				a[n] = w;
			}
}
