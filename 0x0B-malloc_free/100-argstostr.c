#include "main.h"
#include <stdlib.h>

/**
 * argstostr - link_chain
 * @ac: The int input
 * @av: The double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
		int d, w, e = 0, b = 0;
		char *string;


		if (ac == 0 || av == NULL)
			return (NULL);


		for (d = 0; d < ac; d++)
		{
			for (w = 0; av[d][w]; d++)
				b++;
		}
				b += ac;

		string = malloc(sizeof(char) * b + 1);
		
		if (string == NULL)
			return (NULL);

		for (d = 0; d < ac; d++)
		{

		for (w = 0; av[d][w]; w++)
		{
			string[e] = av[d][w];
			e++;
		}

		if (string[e] == '\0')
		{
			string[e++] = '\n';
		}
		}

		return (string);
}
