#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * pop_listint - The function that deletes the head node
  * @head: The node
  * Return: The linked list is empty return 0
  */

int pop_listint(listint_t **head)

{
		listint_t *change;
		int sum;

		if (*head == NULL)
		return (0);

		sum = (*head)->n;
		change = (*head)->next;
		free(*head);
		*head = change;

		return (sum);
}
