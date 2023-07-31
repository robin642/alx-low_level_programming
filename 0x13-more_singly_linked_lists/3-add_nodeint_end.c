#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * *add_nodeint_end - It adds a new node
  * @head: Adds new node
  * @n: The integer
  * Return: The address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
		listint_t *swap_node = (listint_t *)malloc(sizeof(listint_t));
		
		if (swap_node == NULL)
		{
			return (NULL);
		}

		swap_node->n = n;
		swap_node->next = NULL;

		if (*head == NULL)
		{
			*head = swap_node;
			return (swap_node);
		}
		else
		{
			listint_t *brand_new = *head;
			{
				while (brand_new->next != NULL)
				{
					brand_new = brand_new->next;
				}

				brand_new->next = swap_node;
			}
		}
			return (swap_node);
}
