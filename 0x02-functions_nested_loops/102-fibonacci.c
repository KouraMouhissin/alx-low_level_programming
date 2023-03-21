#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long int fibo[50];

	fibo[0] = 1;
	fibo[1] = 2;
	printf("%ld, %ld, ", fibo[0], fibo[1]);

	for (i = 2; i < 50; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		if (i == 49)
			printf("%ld\n", fibo[i]);
		else
			printf("%ld, ", fibo[i]);
	}
	return (0);
}
