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
		(void) argv; /*ignore argv*/
			printf("%d\n", argc - 1);

			return (0);
}
