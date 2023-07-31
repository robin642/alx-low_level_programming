#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - The singly linked list
 * @h: The integer
 * Return: print all elements
 */

size_t print_listint(const listint_t *h)

{
		size_t amount = 0;

		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;

			amount++;
		}

		return (amount);
}
