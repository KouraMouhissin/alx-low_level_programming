#include "3-calc.h"
/**
 * op_add - somme de deux nbres
 * @a: nbr 1
 * @b: nbr 2
 * Return: nbr ajouter
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - soustraction de 2 nbr
 * @a: nbr 1
 * @b: nbr 2
 * Return: nbr soustrait
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication de 2 nbr
 * @a: nbr 1
 * @b: nbr 2
 * Return: nbr multiplier
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - diviser 2 nbr
 * @a: nbr 1
 * @b: nbr 2
 * Return: nbr diviser
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - le module de 2 nbr
 * @a: nbr 1
 * @b: nbr 2
 * Return: le module du nbr
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}
