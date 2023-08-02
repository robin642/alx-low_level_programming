#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_listint2 - It frees a list
  * @head: The node
  * Return: A function that frees a listint_t list
  */

void free_listint2(listint_t **head)

{
		listint_t *brand_new;

		if (head == NULL)
			return;

		while (*head)
		{
			brand_new = (*head)->next;
			free(*head);
			*head = brand_new;
		}

		*head = NULL;
}
