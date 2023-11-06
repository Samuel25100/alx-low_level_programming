#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory of struct
 * @d: the struct variable
 * Return: void
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
