#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list_t
  * @head: The duplicated pointer to the list_t
  * @str: The new string to add in the node
  * Return: The address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)

{
		list_t *old;
		unsigned int len = 0;

		while (str[len])
			len++;

		old = malloc(sizeof(list_t));
		if (!old)
		return (NULL);

		old->str = strdup(str);
		old->len = len;
		old->next = (*head);
		(*head) = old;

		return (*head);
}
