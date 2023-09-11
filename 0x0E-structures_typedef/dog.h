#ifndef _DOG_H
#define _DOG_H

/**
 * dog_t - sturct type dog_t pour le projet dog.h
 */
typedef struct dog dog_t;

/**
 * struct dog - une variable dog
 * @name: point to dog name (the name)
 * @age: age in float
 * @owner: point to owner var
 *
 * Description: Une desc ription longue
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
