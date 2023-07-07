#include <stdio.h>
#include "main.h"

/**
  * _atoi - Converts a string to an integer
  * @s: The string to be converted
  * Return: The int converted from the string
  */

int _atoi(char *s)

{
		int r, w, j, length, e, number;

		r = 0;
		w = 0;
		j = 0;
		length = 0;
		e = 0;
		number = 0;

		while (s[length] != '\0')
			length++;

		while (r < length && e == 0)
		{
			if (s[r] == '-')
				++w;

			if (s[r] >= '0' && s[r] <= '9')
			{
				number = s[r] - '0';
				if (w % 2)
					number = -number;
				j = j * 10 + number;
				e = 1;
				if (s[r + 1] < '0' || s[r + 1] > '9')
					break;
				e = 0;
			}
			r++;
		}

		if (e == 0)
			return (0);

		return (j);
}

/**
  * main - Write a program that multiplies two numbers
  * @argc: The number of arguments
  * @argv: The array of arguments
  * Return: 0 (Success), 1 (Error)
  */

int main(int argc, char *argv[])

{
		int answer, number1, number2;

		if (argc < 3 || argc > 3)
		{
			printf("Error\n");
			return (1);
		}

		number1 = _atoi(argv[1]);
		number2 = _atoi(argv[2]);
		answer = number1 * number2;

		printf("%d\n", answer);

		return (0);
}
