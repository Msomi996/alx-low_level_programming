#include "lists.h"

/**
 * get_nodeint_at_index - outputs the node at a certain index in a linked list
 * @head: top node in the linked list
 * @index: index of the node to output
 *
 * Return: outputs pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *temp = head;

	while (temp && l < index)
	{
		temp = temp->next;
		l++;
	}

	return (temp ? temp : NULL);
}
