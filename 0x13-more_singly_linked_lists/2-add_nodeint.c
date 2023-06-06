#include "lists.h"

/**
 * add_nodeint - inserts a new node at the beginning of a linked list
 * @head: pointer to the top node in the list
 * @k: data to insert in that new node
 *
 * Return: outputs pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int k)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->k = k;
	new->next = *head;
	*head = new;

	return (new);
}
