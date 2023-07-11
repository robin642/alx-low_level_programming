#include <stdlib.h>
#include "main.h"

/**
 * count_word - The helper function to count the number of words in a string
 * @s: The string to evaluate
 * Return: The number of words
 */

int count_word(char *s)

{
		int robin, r, d;

		robin = 0;
		d = 0;


		for (r = 0; s[r] != '\0'; r++)
		{
			if (s[r] == ' ')
				robin = 0;
			else if (robin == 0)
			{
				robin = 1;
				d++;
			}
		}

		return (d);
}

/**
 * **strtow - The splits a string into words
 * @str: The string to split
 *
 * Return: The pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)

{
		char **neo, *evolve;
		int r, w = 0, length = 0, solve, d = 0, begin, finish;


		while (*(str + length))
			length++;
		solve = count_word(str);
		if (solve == 0)
			return (NULL);

		neo = (char **) malloc(sizeof(char *) * (solve + 1));
		if (neo == NULL)
			return (NULL);

		for (r = 0; r <= length; r++)
		{
			if (str[r] == ' ' || str[r] == '\0')
			{
				if (d)
				{
					finish = r;
					evolve = (char *) malloc(sizeof(char) * (d + 1));
					if (evolve == NULL)
						return (NULL);
					while (begin < finish)
						*evolve++ = str[begin++];
					*evolve = '\0';
					neo[w] = evolve - d;
					w++;
					d = 0;
				}
			}

			else if (d++ == 0)
				begin = r;
		}

		neo[w] = NULL;

		return (neo);
}
