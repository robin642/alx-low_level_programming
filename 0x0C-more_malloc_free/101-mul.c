#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - The checks if a string contains a non-digit char
 * @s: The string to be evaluated
 * Return: The 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)

{
		int r = 0;


		while (s[r])
		{
			if (s[r] < '0' || s[r] > '9')
				return (0);
			r++;
		}

		return (1);
}

/**
 * _strlen - It returns the length of a string
 * @s: The string to evaluate
 * Return: The length of the string
 */

int _strlen(char *s)

{
		int r = 0;


		while (s[r] != '\0')
		{
			r++;
		}

		return (r);
}

/**
 * errors - It handles errors for main
 */

void errors(void)

{
		printf("Error\n");
		exit(98);
}

/**
 * main - It multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])

{
		char *r1, *r2;
		int length1, length2, length, r, through, numb1, numb2, *answer, b = 0;


		r1 = argv[1], r2 = argv[2];
		if (argc != 3 || !is_digit(r1) || !is_digit(r2))
			errors();
		
		length1 = _strlen(r1);
		length2 = _strlen(r2);
		length = length1 + length2 + 1;

		answer = malloc(sizeof(int) * length);
		if (!answer)
			return (1);

		for (r = 0; r <= length1 + length2; r++)
			answer[r] = 0;

		for (length1 = length1 - 1; length1 >= 0; length1--)
		{
			numb1 = r1[length1] - '0';
			through = 0;

			for (length2 = _strlen(r2) - 1; length2 >= 0; length2--)
			{
				numb2 = r2[length2] - '0';
				through += answer[length1 + length2 + 1] + (numb1 * numb2);
				answer[length1 + length2 + 1] = through % 10;
				through /= 10;
			}

			if (through > 0)
				answer[length1 + length2 + 1] += through;
		}

		for (r = 0; r < length - 1; r++)
		
		{
			if (answer[r])
				b = 1;
			if (b)
				_putchar(answer[r] + '0');
		}

		if (!b)
			_putchar('0');
		_putchar('\n');
		free(answer);
		return (0);
}
