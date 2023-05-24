#ifndef CALC_H
#define CALC_H
/**
 * struct op - the struct op.
 * @op: an operator.
 * @f: associated function.
 */
typedef struct op
{
	char *op;
	int (*f)(int x, int r);
} op_t;

int op_add(int x, int r);
int op_sub(int x, int r);
int op_mul(int x, int r);
int op_div(int x, int r);
int op_mod(int x, int r);
int (*get_op_func(char *s))(int, int);

#endif
