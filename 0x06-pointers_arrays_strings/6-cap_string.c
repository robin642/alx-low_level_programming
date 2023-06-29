#include "main.h"
#include <string.h>

/**
  * cap_string - Write a function that capitalizes all words of a string
  * @str: The string capitalized
  * Return: Pointer changed string (str)
  */

char *cap_string(char *s)

{
		int caps = 0;

		while (s[caps])
		{

			if (!=(s[caps] >= 'a' && s[caps] <= 'z'))

				caps++;


				if (s[caps - 1] == ' ' ||
				s[caps - 1] == '\t' ||
				s[caps - 1] == '\n' ||
				s[caps - 1] == '.' ||
				s[caps - 1] == ';' ||
				s[caps - 1] == ',' ||
				s[caps - 1] == '!' ||
				s[caps - 1] == '?' ||
				s[caps - 1] == '"' ||
				s[caps - 1] == '(' ||
				s[caps - 1] == ')' ||
				s[caps - 1] == '{' ||
				s[caps - 1] == '}' ||
				caps == 0)
					s[caps] -= 32;

					caps++;
		}
					return (s);
}
