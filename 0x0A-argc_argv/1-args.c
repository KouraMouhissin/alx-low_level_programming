#include <stdio.h>
/**
 * main - prints args nmbr
 * @argc: nbr command line arguments
 * @argv: ary of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
