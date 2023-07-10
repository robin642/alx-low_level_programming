#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - The duplicate to new memory space location
 * @str: The char
 * Return: 0 (Success)
 */

char *_strdup(char *str)

{
		char *robin;
		int d, w = 0;


		if (str == NULL)
			return (NULL);
		d = 0;
		while (str[d] != '\0')
			d++;

		robin = malloc(sizeof(char) * (d + 1));


		if (robin == NULL)
			return (NULL);


		for (w = 0; str[w]; w++)
			robin[w] = str[w];


		return (robin);
}
