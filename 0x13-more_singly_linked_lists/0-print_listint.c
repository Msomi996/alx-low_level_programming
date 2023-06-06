#include "lists.h"

/**
 * print_listint - outputs all the elements of a linked list
 * @p: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *p)
{
        size_t num = 0;

        while (p)
        {
                printf("%d\n", p->k);
                num++;
                p = p->next;
        }

        return (num);
}
