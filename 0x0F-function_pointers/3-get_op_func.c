#include "3-calc.h"
/**
  *get_op_func - A function that selects the correct operation
  *to be undertaken
  *
  *@s: Operator to be assed as argument to program
  *
  *Return: returns function same as the operation to undertake
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		if (s[i] != 43 || s[i] != 45 || s[i] != 47 ||
		s[i] != 42 || s[i] != 37)
		{
			return (NULL);
		}
		i++;
	}
	return (ops[i].f);
}
