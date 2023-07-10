#include "main.h"
#include <stdlib.h>

/**
 * str_concat - The get ends of input and add together for size
 * @s1: The input one to concat
 * @s2: The input two to concat
 * Return: The concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)

{
		char *link_chain;
		int d, w;


		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";


		d = w = 0;

		while (s1[d] != '\0')
			d++;
		while (s2[w] != '\0')
			w++;

		link_chain = malloc(sizeof(char) * (d + w + 1));

		if (link_chain == NULL)
			return (NULL);

		d = w = 0;

		while (s1[d] != '\0')
		{
			link_chain[d] = s1[d];
			d++;
		}

		while (s2[w] != '\0')
		{
			link_chain[d] = s2[w];
			d++, w++;
		}
			link_chain[d] = '\0';
			return (link_chain);
}
