#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog function
 * @d: point to dog
 *
 * Return: nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = (*d).name;
		float age = (*d).age;
		char *owner = (*d).owner;

		if (name != NULL)
			printf("Name: %s\n", name);
		else
			printf("nil\n");

		if (age != 0)
			printf("Age: %f\n", age);
		else
			printf("0.000000\n");

		if (owner != NULL)
			printf("Owner: %s\n", owner);
		else
			printf("nil\n");
	}
}
