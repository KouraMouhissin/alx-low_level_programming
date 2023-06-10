#include <stdio.h>
/**
 * main - prints args nmbr
 * @argc: nbr command line arguments
 * @argv: ary of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
