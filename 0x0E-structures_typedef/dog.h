#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - description dog
 * @name: point to dog name
 * @age: age in float
 * @owner: point to owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
