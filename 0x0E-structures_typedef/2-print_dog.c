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
		char *owner = (*d).owner;

		if (name)
			printf("Name: %s\n", name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (owner)
			printf("Owner: %s\n", owner);
		else
			printf("Owner: (nil)\n");
	}
}
