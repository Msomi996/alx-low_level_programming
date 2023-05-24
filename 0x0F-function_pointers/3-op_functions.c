#include "3-calc.h"

int op_add(int j, int k);
int op_sub(int j, int k);
int op_mul(int j, int k);
int op_div(int j, int k);
int op_mod(int j, int k);

/**
 * op_add - output  sum of two numbers.
 * @j: number 1.
 * @k: number 2.
 *
 * Return: The sum of j and k.
 */
int op_add(int j, int k)
{
	return (j + k);
}
/**
 * op_sub - outputs difference of two numbers.
 * @j: number 1.
 * @k: number 2.
 *
 * Return: The difference of j and k.
 */
int op_sub(int j, int k)
{
	return (j - k);
}
/**
 * op_mul - outputs  product of two numbers.
 * @j: number 1.
 * @k: number 2.
 *
 * Return: The product of j and k.
 */
int op_mul(int j, int k)
{
	return (j * k);
}
/**
 * op_div - output division of two numbers.
 * @j: number 1.
 * @k: number 2.
 *
 * Return: The quotient of j and k.
 */
int op_div(int j, int k)
{
	return (j / k);
}
/**
 * op_mod - outputs remainder of the division of two numbers.
 * @j: number 1.
 * @k: number 2.
 *
 * Return: The remainder of the division of j by k.
 */
int op_mod(int j, int k)
{
	return (j % k);
}
