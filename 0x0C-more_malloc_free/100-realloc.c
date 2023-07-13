#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - It reallocates a memory block using malloc and free
 * @ptr: The pointer to the memory previsouly allocated by malloc
 * @old_size: The size of the allocated memory for ptr
 * @new_size: The new size of the new memory block
 * Return: The pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
		char *rob1;
		char *old_rob;
		unsigned int r;


		if (new_size == old_size)
			return (ptr);

		if (new_size == 0 && ptr)
		{
			free(ptr);
			return (NULL);
		}

		if (!ptr)
			return (malloc(new_size));

		rob1 = malloc(new_size);
		if (!rob1)
			return (NULL);

		old_rob = ptr;

		if (new_size < old_size)
		{
			for (r = 0; r < new_size; r++)
				rob1[r] = old_rob[r];
		}

		if (new_size > old_size)
		{
			for (r = 0; r < old_size; r++)
				rob1[r] = old_rob[r];
		}

		free(ptr);
		return (rob1);
}
