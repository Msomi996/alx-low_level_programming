#include <stdlib.h>
#include "lists.h"

/**
 * free_list - release a linked list
 * @head: list_t list to be released
 */
void free_list(list_t *head)
{
	list_t *container;

	while (head)
	{
		container = head->next;
		myFree(head->str);
		myFree(head);
		head = container;
	}
}
