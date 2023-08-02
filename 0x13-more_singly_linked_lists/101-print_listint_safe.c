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
		size_t sum = 0;
		long int change;

		while (head)
		{
			change = head - head->next;
			sum++;
			printf("[%p] %d\n", (void *)head, head->n);
			if (change > 0)
				head = head->next;
			else
			{
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				break;
			}
		}

		return (sum);
}
