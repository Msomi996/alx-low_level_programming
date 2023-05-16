#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign it the character c
 * @size: size an array
 * @c: character to assign
 * Description: create an  array of size  and assign it the character c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		str[i] = c;
	return (str);
}
