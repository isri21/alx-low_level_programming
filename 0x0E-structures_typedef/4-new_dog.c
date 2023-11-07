#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: structure pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pt;

	if (name == NULL || owner == NULL)
		return (NULL);
	pt = malloc(sizeof(dog_t));
	if (pt == NULL)
		return (NULL);
	pt->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (pt->name == NULL)
	{
		free(pt);
		return (NULL);
	}
	pt->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (pt->owner == NULL)
	{
		free(pt->name);
		free(pt);
		return (NULL);
	}
	strcpy(pt->name, name);
	strcpy(pt->owner, owner);
	pt->age = age;

	return (pt);
}
