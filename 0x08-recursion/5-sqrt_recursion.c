#include "main.h"

/**
  * _sqrt_recursion - Write a function that returns the natural square root of a number
  * @n: Calculate the square root
  * Return: Square root
  */

int _sqrt_recursion(int n)

{
		if (n < 0)
			return (-1);
		return (actual_sqrt_recursion(n, 0));
}

/**
  * actual_sqrt_recursion - The recurses to find the natural
  * Square root of a number
  * @n: Calculate the square root
  * @i: Iterator
  */

int actual_sqrt_recursion(int n, int i)

{
		if (i * i > n)
			return (-1);
		if (i * i == n)
			return (i);

		return (actual_sqrt_recursion(n, i + 1));
}
