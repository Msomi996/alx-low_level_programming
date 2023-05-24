#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - output name using pointer to function
 * @name: add string
 * @f: pointer to function
 * Return: none
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
