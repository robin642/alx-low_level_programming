#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - It frees a listint_t list
 * @h: The pointer to first node
 * Return: The number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)

{
		size_t expect = 0;
		int make;
		listint_t *change;

		if (!h || !*h)
			return (0);

		while (*h)
		{
			make = *h - (*h)->next;
			if (make > 0)
			{
				change = (*h)->next;
				free(*h);
				*h = change;
				expect++;
			}
			else
			{
				free(*h);
				*h = NULL;
				expect++;
				break;
			}
		}

		*h = NULL;

		return (expect);
}
