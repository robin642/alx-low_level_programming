#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * *get_nodeint_at_index - The nth node of a listint_t linked list
  * @head: The node
  * @index: Starting 0
  * Return: Not exist NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
		unsigned int brand_new_index = 0;
		listint_t *brand_new_node = head;

		while (brand_new_node && brand_new_index < index)
		{
			brand_new_node = brand_new_node->next;
			brand_new_index++;
		}
		return (brand_new_node ? brand_new_node : NULL);
}
