#include "main.h"

/**
  * cap_string - Write a function that capitalizes all words of a string
  * @r: The pointer to string
  * Return: The pointer to r
  */

char *cap_string(char *r)

{
		int caps;

		caps = 0;
		while (r[caps] != '\0')
		{
			if (r[0] >= 97 && r[0] <= 122)
			{
				r[0] = r[0] - 32;
			}

				if (r[caps] == ' ' ||
				r[caps] == '\t' ||
				r[caps] == '\n' ||
				r[caps] == ',' ||
				r[caps] == ';' ||
				r[caps] == '.' ||
				r[caps] == '!' ||
				r[caps] == '?' ||
				r[caps] == '"' ||
				r[caps] == '(' ||
				r[caps] == ')' ||
				r(caps)	== '{' ||
				r[caps] == '}')
			{
				if (r[caps + 1] >= 97 && r[caps + 1] <= 122)
				{
					r[caps + 1] = r[caps + 1] - 32;
				}
			}
					caps++;
		}
					return (r);
}
