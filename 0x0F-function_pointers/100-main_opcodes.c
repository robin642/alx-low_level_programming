#include <stdio.h>
#include <stdlib.h>

/**
 * main - It prints its own opcodes
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
		int bytez, r;
		char *array;

		if (argc != 2)
		{
			printf("Error\n");
			exit(1);
		}

		bytez = atoi(argv[1]);

		if (bytez < 0)
		{
			printf("Error\n");
			exit(2);
		}

		array = (char *)main;

		for (r = 0; r < bytez; r++)
		{
			if (r == bytez - 1)
			{
				printf("%02hhx\n", array[r]);
				break;
			}

			printf("%02hhx ", array[r]);
		}

		return (0);
}
