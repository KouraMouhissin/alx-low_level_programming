#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argc
 * @argv: argv
 * Return: Success
*/

int main(int argc, char *argv[])
{
	int i, byt;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < byt; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != byt - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
