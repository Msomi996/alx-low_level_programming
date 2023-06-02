#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a latest node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: latest string to add in the node
 *
 * Return: the address of the latest element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *latest;
	unsigned int len = 0;

	while (str[len])
		len++;

	latest = malloc(sizeof(list_t));
	if (!latest)
		return (NULL);

	latest->str = strdup(str);
	latest->len = len;
	latest->next = (*head);
	(*head) = latest;

	return (*head);
}
