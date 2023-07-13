#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Write a function that creates an array of integers
 * @min: The minimum range of values stored
 * @max: The maximum range of values stored and number of elements
 * Return: The pointer to the new array
 */

int *array_range(int min, int max)

{
		int *rob;
		int r, amount;


		if (min > max)
			return (NULL);

		amount = max - min + 1;

		rob = malloc(sizeof(int) * amount);

		if (rob == NULL)
			return (NULL);

		for (r = 0; min <= max; r++)
			rob[r] = min++;

		return (rob);
}
