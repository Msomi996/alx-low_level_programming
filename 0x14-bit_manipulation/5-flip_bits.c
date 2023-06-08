#include "main.h"

/**
 * flip_bits - calculates the numb of bits to change
 * to get from one numb to another
 * @n: first numb
 * @m: second numb
 *
 * Return: numb of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
