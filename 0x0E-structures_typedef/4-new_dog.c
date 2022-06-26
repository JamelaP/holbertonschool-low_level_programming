#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  a function that creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: owner's name
 * Return: datatype.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name1;
	char *owner1;
	dog_t *d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	name1 = malloc(strlen(name) + 1);
	owner1 = malloc(strlen(owner) + 1);
	d = malloc(sizeof(dog_t));

	if (d == NULL || owner1 == NULL || name1 == NULL)
	{
		free(name1);
		free(owner1);
		free(d);
		return (NULL);
	}

	strcpy(name1, name);
	strcpy(owner1, owner);

	d->name = name1;
	d->age = age;
	d->owner = owner1;

	return (d);
}

