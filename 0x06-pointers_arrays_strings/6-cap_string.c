#include "main.h"

/**
  * cap_string - Write a function that capitalizes all words of a string
  * @str: The string capitalized
  * Return: Pointer changed string (str)
  */

char *cap_string(char *str)

{
		int caps = 0;

		while (str[caps])
		{

			while (!(str[0] >= 'a' && str[0] <= 'z'))

				caps++;


				if (str[caps - 1] == ' ' ||
				str[caps - 1] == '\t' ||
				str[caps - 1] == '\n' ||
				str[caps - 1] == '.' ||
				str[caps - 1] == ';' ||
				str[caps - 1] == ',' ||
				str[caps - 1] == '!' ||
				str[caps - 1] == '?' ||
				str[caps - 1] == '"' ||
				str[caps - 1] == '(' ||
				str[caps - 1] == ')' ||
				str[caps - 1] == '{' ||
				str[caps - 1] == '}' ||
				caps == 0)
					str[caps] -= 32;

					caps++;
		}
					return (str);
}
