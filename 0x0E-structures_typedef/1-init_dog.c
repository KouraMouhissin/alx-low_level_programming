#include "dog.h"
/**
 * init_dog - function for dog init
 * @d: point to dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
