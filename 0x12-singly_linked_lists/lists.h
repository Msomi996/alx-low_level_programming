#ifndef LISTS_H
#define LISTS_H

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);

typedef struct list_s
{
        char *str;
        unsigned int len;
        struct list_s *next;
} list_t;
/**
 * struct list_s - singly linked list
 * @next: points to the next node
 * @len: length of the string
 * @str: string - (malloc'ed string)
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
void free_list(list_t *head);
size_t list_len(const list_t *h);

#endif
