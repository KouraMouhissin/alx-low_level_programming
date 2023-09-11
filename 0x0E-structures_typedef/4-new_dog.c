#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - pour creer un nouveu dog
 * @name: nom du dog
 * @age: l'age du dog
 * @owner: proprietaire du dog
 *
 * Return: retourne la structure du dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, k_nom, k_prop;
	dog_t *kdog;

	kdog = malloc(sizeof(*kdog));
	if (kdog == NULL || !(name) || !(owner))
	{
		free(kdog);
		return (NULL);
	}
/*Debut des boucles */
	for (k_nom = 0; name[k_nom]; k_nom++)
		;

	for (k_prop = 0; owner[k_prop]; k_prop++)
		;
	(*kdog).owner = malloc(k_prop + 5);
	(*kdog).name = malloc(k_nom + 5);

	if (!((*kdog).name) || !((*kdog).owner))
	{
		free((*kdog).name);
		free((*kdog).owner);
		free(kdog);
		return (NULL);
	}

	for (a = 0; a < k_nom; a++)
		(*kdog).name[a] = name[a];
	(*kdog).name[a] = '\0';

	(*kdog).age = age;
/*Boucle pour l'attribution u prop*/
	for (a = 0; a < k_prop; a++)
		(*kdog).owner[a] = owner[a];
	(*kdog).owner[a] = '\0';

	return (kdog);
}
