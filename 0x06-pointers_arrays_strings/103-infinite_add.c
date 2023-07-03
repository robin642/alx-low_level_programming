#include "main.h"
#include <stdio.h>

/**
  * rev_string - Reverse array
  * @n: Integer params
  * Return: 0
  */

void rev_string(char *n)

{
		int d = 0;
		int w = 0;
		char temp;

		while (*(n + d) != '\0')
		{
			d++;
		}
			d--;

		for (w = 0; w < d; w++, d--)
		{
			temp = *(n + w);
			*(n + w) = *(n + d);
			*(n + d) = temp;
		}
}

/**
  * infinite_add - Write a function that adds two numbers
  * @n1: The text representation of 1st number to add
  * @n2: The text representation of 2nd number to add
  * @r: The pointer to buffer
  * @size_r: The buffer size
  * Return: The pointer to calling function
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
		int overflow = 0, d = 0, w = 0, digits = 0;
		int val1 = 0, val2 = 0, temp_tot = 0;

		while (*(n1 + d) != '\0')
			d++;
		while (*(n2 + w) != '\0')
			w++;
		d--;
		w--;

		if (w >= size_r || d >= size_r)
			return (0);
		while (w >= 0 || d >= 0 || overflow == 1)
		{
			if (d < 0)
				val1 = 0;
			else
				val1 = *(n1 + d) - '0';
			if (w < 0)
				val2 = 0;
			else
				val2 = *(n2 + w) - '0';
			temp_tot = val1 + val2 + overflow;
			if (temp_tot >= 10)
				overflow = 1;
			else
				overflow = 0;
			if (digits >= (size_r - 1))
				return (0);
			*(r + digits) = (temp_tot % 10) + '0';
			digits++;
			w++;
			d++;
		}

		if (digits == size_r)
			return (0);
		*(r + digits) = '\0';
		rev_string(r);
		return (r);
}
