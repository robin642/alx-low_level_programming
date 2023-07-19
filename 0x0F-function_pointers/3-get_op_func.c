#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - It selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)

{
		op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

		int r = 0;

		while (ops[r].op != NULL && *(ops[r].op) != *s)
			r++;

		return (ops[r].f);
}
