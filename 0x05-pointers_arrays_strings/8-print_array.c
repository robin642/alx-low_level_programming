#include <stdio.h>

/**
  * print_array - Write a function that prints n
  * elements of an array of integers, followed by a new line
  * @a: Input Array
  * @n: Length of the array
  * Return: Success 0
  */

void print_array(int *a, int n)

{
		int straight_line_array;

		for (straight_line_array = 0; straight_line_array < n; straight_line_array++)
		{
			printf("%d", a[straight_line_array]);
			if (straight_line_array != (n - 1))
			{
				printf(", ");
			}
		}
				putchar('\n');
}
