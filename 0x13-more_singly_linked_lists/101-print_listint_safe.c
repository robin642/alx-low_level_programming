#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head
 * Return: 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *lemon, *orange;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	lemon = head->next;
	orange = (head->next)->next;

	while (orange)
	{
		if (lemon == orange)
		{
			lemon = head;
			while (lemon != orange)
			{
				count++;
				lemon = lemon->next;
				orange = orange->next;
			}

			lemon = lemon->next;
			while (lemon != orange)
			{
				count++;
				lemon = lemon->next;
			}

			return (count);
		}

		lemon = lemon->next;
		orange = (orange->next)->next;
	}

	return (0);
}


/**
 * print_listint_safe - It prints a linked list safely
 * @head: The type listint_t to print
 * Return: The number of nodes
 */

size_t print_listint_safe(const listint_t *head)

{
	size_t count, amount = 0;

	count = looped_listint_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (amount = 0; amount < count; amount++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
