#include <stdio.h>
#include "main.h"

/**
  * main - Write a program that prints its name
  * @argc: The number of arguments
  * @argv: The array of arguments
  * REturn: Always 0 (Success)
  */

int main(int argc __attribute__((unused)), char *argv[])

{
		printf("%s\n", *argv);

		return (0);
}
