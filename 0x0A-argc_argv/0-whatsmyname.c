#include <stdio.h>
/**
 * main - prints prog name
 * @argc: nbr command line arguments
 * @argv: ary of command line arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
