#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

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
