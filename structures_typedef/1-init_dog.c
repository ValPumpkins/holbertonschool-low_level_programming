#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize variable of type stuct dog
 * @d: struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
