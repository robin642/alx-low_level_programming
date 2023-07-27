#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - It adds a new node at the end of a linked list
 * @head: The double pointer to the list_t list
 * @str: The string to put in the new node
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
		list_t *old;
		list_t *chg;
		unsigned int len = 0;

		while (str[len])
			len++;

		old = malloc(sizeof(list_t));
		if (!old)
			return (NULL);

		old->str = strdup(str);
		old->len = len;
		old->next = NULL;

		if (*head == NULL)
		{
			*head = old;
		}

		else
		{
			chg = *head;
			while (chg->next != NULL)
			chg = chg->next;
			chg->next = old;
		}
			return (old);
}
