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
		listint_t *brand_new = *head;
		listint_t *next;

		if (head == NULL)
		{
		return;
		}

		while (brand_new != NULL)
		{
			next = brand_new->next;
			free(brand_new);
			brand_new = next;
		}

		*head = NULL;
}
