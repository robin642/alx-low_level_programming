#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * listint_len - The elements in a link list
  * @h: The integer
  * Return: The number of elements
  */

size_t listint_len(const listint_t *h)

{
		size_t amounts = 0;

		while (h != NULL)
		{
			amounts++;

			h = h->next;
		}

		return (amounts);
}
