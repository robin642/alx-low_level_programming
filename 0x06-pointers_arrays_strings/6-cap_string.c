#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  * cap_string - Write a function that capitalizes all words of a string
  * @r: The pointer to string
  * Return: The pointer to r
  */

char *cap_string(char *r)

{
		int caps_lize;

		caps_lize = 0;
		while (r[caps_lize] != '\0')
		{
			if (r[0] >= 97 && r[0] <= 122)
			{
				r[0] = r[0] - 32;
			}

				if (r[caps_lize] == ' ' ||
				r[caps_lize] == '\t' ||
				r[caps_lize] == '\n' ||
				r[caps_lize] == ',' ||
				r[caps_lize] == ';' ||
				r[caps_lize] == '.' ||
				r[caps_lize] == '!' ||
				r[caps_lize] == '?' ||
				r[caps_lize] == '"' ||
				r[caps_lize] == '(' ||
				r[caps_lize] == ')' ||
				r[caps_lize]	== '{' ||
				r[caps_lize] == '}')
			{
				if (r[cap_lize + 1] >= 97 && r[caps_lize + 1] <= 122)
				{
					r[caps_lize + 1] = r[caps_lize + 1] - 32;
				}
			}
					caps_lize++;
		}
					return (r);
}
