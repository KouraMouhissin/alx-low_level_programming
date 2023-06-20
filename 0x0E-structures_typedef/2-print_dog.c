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
	if (d)
	{
		char *name = (*d).name;
		float age = (*d).age;
		char *owner = (*d).owner;

		if (name != NULL)
			printf("Name: %s\n", name);
		else
			printf("nil\n");

		printf("Age: %f\n", age);

		if (owner != NULL)
			printf("Owner: %s\n", owner);
		else
			printf("nil\n");
	}
}
