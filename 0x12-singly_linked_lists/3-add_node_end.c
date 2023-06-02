#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds the latest node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the latest node
 *
 * Return: address of the latest element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *latest;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	latest = malloc(sizeof(list_t));
	if (!latest)
		return (NULL);

	latest->str = strdup(str);
	latest->len = len;
	latest->next = NULL;

	if (*head == NULL)
	{
		*head = latest;
		return (latest);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = latest;

	return (latest);
}
