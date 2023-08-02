#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - It deletes the node
 * @head: The pointer to the first element
 * @index: The index of the node to delete
 *  Return: The 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *change = *head;
	listint_t *brand_new = NULL;
	unsigned int sum = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(change);
		return (1);
	}

	while (sum < index - 1)
	{
		if (!change || !(change->next))
			return (-1);
		change = change->next;
		sum++;
	}

	brand_new = change->next;
	change->next = brand_new->next;
	free(brand_new);

	return (1);
}
