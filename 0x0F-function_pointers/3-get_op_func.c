#include "3-calc.h"
/**
 * get_op_func - choix de la fonction
 * @s: operation en char
 * Return: un pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"*", op_mul},
		{"/", op_div},
		{"-", op_sub},
		{"%", op_mod},
		{NULL, NULL}
	};

	/*initialisation de l'iterator*/
	int m = 0;

	while (m <= 9)
	{
		/*boocle si iterator est sup à 10*/
		if (s[0] == ops->op[m])
			break;
		m++;
	}

	return (ops[m / 2].f);
}
