#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
  * check_num - Check - The string there are digit
  * @str: The array str
  * Return: Always 0 (Success)
  */

int check_num(char *str)
{

		unsigned int counting;

		counting = 0;
		while (counting < strlen(str))

		{
			if (!isdigit(str[counting]))
			{
				return (0);
			}

			counting++;
		}
		return (1);
}

/**
  * main - Print the name of the program
  * @argc: Count arguments
  * @argv: Arguments
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])

{

		int counting;
		int string_to_integer;
		int answer = 0;

		counting = 1;
		while (counting < argc)
		{
			if (check_num(argv[counting]))
			{
				string_to_integer = atoi(argv[counting]);

				answer += string_to_integer;
			}

			/*Condition if one of the number contains symbols that are not digits*/


			else
			{
				printf("Error\n");
				return (1);
			}

			counting++;
		}
				printf("%d\n", answer); /*print sum*/

				return (0);
}
