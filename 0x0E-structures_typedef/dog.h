#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create a struct with data.
 * @name: dog's name
 * @age: dog's age
 * @owner: name of owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

/* Prototypes 0x0F*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
