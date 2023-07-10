#include "main.h"
#include <stdlib.h>

/**
 * create_array - The create array of size size and assign char c
 * @size: The size of array
 * @c: The char to assign
 * Description: The create array of size size and assign char c
 * Return: The pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)

{
		char *string;
		unsigned int r;


		string = malloc(sizeof(char) * size);
		if (size == 0 || string == NULL)
			return (NULL);


		for (r = 0; r < size; r++)
			string[r] = c;
		return (str);
}
