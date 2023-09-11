#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - la fonction pour free dog
 * @d: parm dog
 *
 * Return: pas de return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
