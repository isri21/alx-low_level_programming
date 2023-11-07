#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the structure
 * @name: name of the member to initialize
 * @age: age of the member to initialize
 * @owner: owner of the member to initialize
 *
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
