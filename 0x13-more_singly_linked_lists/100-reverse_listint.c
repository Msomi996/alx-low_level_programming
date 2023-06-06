#include "lists.h"

/**
 * reverse_listint - alter a linked list
 * @head: pointer to the top node in the list
 *
 * Return: outputs pointer to thetop node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
