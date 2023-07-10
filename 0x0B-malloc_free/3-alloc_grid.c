#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - The nested loop to make grid
 * @width: The width input
 * @height: The height input
 * Return: The pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{
		int **robin;
		int r, w;


		if (width <= 0 || height <= 0)
			return (NULL);

		robin = malloc(sizeof(int*) * height);

		if (robin == NULL)
			return (NULL);

		for (r = 0; r < height; r++)
		{
			robin[r] = malloc(sizeof(int) * width);

			if (robin[r] == NULL)
			{
				for (; r >= 0; r--)
					free(robin[r]);

				free(robin);
				return (NULL);
			}
		}

		for (r = 0; r < height; r++)
		{
			for (w = 0; w < width; w++)

				robin[r][w] = 0;
		}
			return (robin);
}
