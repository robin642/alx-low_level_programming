#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - It reverses a listint_t
 * @head: The pointer to first node
 * Return: The pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = reverse;
		reverse = *head;
		*head = next;
	}

	*head = reverse;

	return (*head);
}
