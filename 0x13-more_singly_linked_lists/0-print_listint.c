#include "lists.h"

/**
 * print_listint - The singly linked list
 * @h: The integer
 * Return: print all elements
 */

size_t print_listint(const listint_t *h)

{
		size_t add = 0;
		const listint_t *new = h;

		while (new != NULL)
		{
				printf("%d\n", new->n );
			add++;
			new = new->next;
		}

		return (add);
}
