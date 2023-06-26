#include "main.h"

/**
  * swap_int - Write a function that swaps the values of two integers.
  * @a: swap integer a with integer b
  * @b: swap integer a with integer a
  * Return: Success 0
  */

void swap_int(int *a, int *b)

{
		int r;


		r = *a;
		*a = *b;
		*b = r;

}
