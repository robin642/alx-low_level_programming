#include <stdlib.h>
#include "lists.h"

/**
 * free_list - It frees a linked list
 * @head: It list_t  to be freed
 */

void free_list(list_t *head)

{
		list_t *chg;

		while (head)
		{
			chg = head->next;
			free(head->str);
			free(head);
			head = chg;
		}
}
