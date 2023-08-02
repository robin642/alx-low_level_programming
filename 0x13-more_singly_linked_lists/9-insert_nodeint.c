#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - The new node inserts at a given position.
 * @head: The pointer first node
 * @idx: The new node wher index is added
 * @n: The insert new node
 * Return: The pointer, NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
		unsigned int serts;
		listint_t *brand_new;
		listint_t *change = *head;

		brand_new = malloc(sizeof(listint_t));
		if (!brand_new || !head)
			return (NULL);

		brand_new->n = n;
		brand_new->next = NULL;

		if (idx == 0)
		{
			brand_new->next = *head;
			*head = brand_new;
			return (brand_new);
		}

		for (serts = 0; change && serts < idx; serts++)
		{
			if (serts == idx - 1)
			{
				brand_new->next = change->next;
				change->next = brand_new;
				return (brand_new);
			}
			else
				change = change->next;
		}

		return (NULL);
}
