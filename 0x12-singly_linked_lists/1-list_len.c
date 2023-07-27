#include <stdlib.h>
#include "lists.h"

/**
  * list_len - Write a function that returns the number of elements in a linked list_t list
  * @h: The pointer to the list_t
  * Return: The number elements of h
  */

size_t list_len(const list_t *h)

{
	size_t w = 0;

	while (h)
	{
		w++;
		h = h->next;
	}
		return (w);
}
