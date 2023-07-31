#include "lists.h"

/**
 * print_listint - The singly linked list
 * @h: The integer
 * Return: print all elements
 */

size_t print_listint(const listint_t *h)

{
		size_t add = 0;

		while (h)
		{
			printf("%d\n", h->n);
			add++;
			h = h->next;
		}

		return (add);
}
