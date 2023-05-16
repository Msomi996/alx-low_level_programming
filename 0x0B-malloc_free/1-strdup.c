#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int b, e = 0;

	if (str == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
		b++;

	aaa = malloc(sizeof(char) * (b + 1));

	if (aaa == NULL)
		return (NULL);

	for (e = 0; str[e]; e++)
		aaa[e] = str[e];

	return (aaa);
}
