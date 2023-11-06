#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y;
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	x = strlen(name);
	y = strlen(owner);
	(*p).name = malloc(sizeof(char) * x + 1);
	(*p).owner = malloc(sizeof(char) * y + 1);
	if ((*p).name == NULL || (*p).owner == NULL)
	{
		free((*p).name);
		free((*p).owner);
		free(p);
		return (NULL);
	}
	(*p).age = age;
	strcpy(p->name, name);
	strcpy(p->owner, owner);
	return (p);
}
