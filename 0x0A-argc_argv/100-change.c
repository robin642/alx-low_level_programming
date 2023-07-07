#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - Minimum number of coins to make change for an amount of money
  * @argc: Number arguments
  * @argv: Array arguments
  * Return: 0 (Success), 1 (Error)
  */

int main(int argc, char *argv[])

{
		int number, r, answer;
		int money[] = {100, 75, 40, 15, 3};

		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}

		number = atoi(argv[1]);
		answer = 0;

		if (number < 0)
		{
			printf("0\n");
			return (0);
		}

		for (r = 0; r < 5 && number >= 0; r++)
		{
			while (number >= money[r])
			{
				answer++;
				number -= money[r];
			}
		}

				printf("%d\n", answer);
				return (0);
}
