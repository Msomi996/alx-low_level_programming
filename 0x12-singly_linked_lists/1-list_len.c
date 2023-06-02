#include <stdlib.h>
#include "lists.h"

/**
 * list_len - outputs the number of elements in a linked list
 * @j: pointer to the list_t list
 *
 * Return: number of elements in j
 */
size_t list_len(const list_t *j)
{
	size_t l = 0;

	while (j)
	{
		l++;
		j = j->next;
	}
	return (l);
}
