#include "hash_tables.h"
/**
 * key_index - make a key from long int return of hash_djb2
 * @key: the value from which hash will made of
 * @size: the size of hash table
 * Return: key(int)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_int = 0;

	if (key == NULL || size == 0)
		return (NULL);
	key_int = hash_djb2(key);
	return (key_int % size);
}
