#include "3-calc.h"
/**
 * main - check code for main
 * @argc: count argc
 * @argv: array argv
 * Return: 0 anytime
 */
int main(int argc, char *argv[])
{
	int e, f;
	int (*calcul)(int, int);

	if (argv[2][1])
	{
		/*Tableau des args*/
		printf("Error\n");
		exit(99);
	}

	if (argc != 4)
	{
		/*Si le nombre d'argument n'est pas 4*/
		printf("Error\n");
		exit(98);
	}

	calcul = get_op_func(argv[2]);

	if (calcul == NULL)
	{
		/*Cas où operation == NULL*/
		printf("Error\n");
		exit(99);
	}

	e = atoi(argv[1]);
	f = atoi(argv[3]);
	
	printf("%d\n", calcul(e, f));

	return (0);
}
