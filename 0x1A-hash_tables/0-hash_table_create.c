#include "hash_tables.h"
/**
 * hash_table_create - create hash table and return its pointer
 * @size: the size of hash table
 * Return: pointer or Null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **array;
	unsigned long int x = 0;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
	array[x] = NULL;
	}

	new->array = array;
	new->size = size;

	return (new);
}
