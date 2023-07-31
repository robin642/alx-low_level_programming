#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * *add_nodeint - It adds a new node
  * @head: The new node
  * @n: The new head
  * Return: The address of the new element, or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)

{
		listint_t *swap_node = (listint_t *)malloc(sizeof(listint_t));

		if (swap_node == NULL)
		{
			return (NULL);
		}

		swap_node->n = n;
		swap_node->next = *head;

		*head = swap_node;

		return (swap_node);
}
