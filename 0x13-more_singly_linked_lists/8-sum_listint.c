#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint -  The sum of all the data of linked list
 * @head: First node
 * Return: 0
 */

int sum_listint(listint_t *head)

{
	int add = 0;
	listint_t *change = head;

	while (change)
	{
		add += change->n;
		change = change->next;
	}

	return (add);
}
