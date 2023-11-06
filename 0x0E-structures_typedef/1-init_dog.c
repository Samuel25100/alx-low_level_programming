#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @dog: struct with char name, float age, char owner
 * @d: the struct variable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: pointer of the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
