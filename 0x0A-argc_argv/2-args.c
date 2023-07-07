#include <stdio.h>
#include "main.h"

/**
  * main - Write a program that prints all arguments it receives
  * @argc: The number of arguments
  * @argv: The array of arguments
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])

{
		int r;

		for (r = 0; r < argc; r++)
		{
			printf("%s\n", argv[r]);
		}

		return (0);
}
