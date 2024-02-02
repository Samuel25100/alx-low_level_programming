#include "hash_tables.h"
/**
 * hash_table_set - add element to the hash table
 * @ht: pointer to the hash table created
 * @key: the key to the new value
 * @value: the value that need to stored
 * Return: 1 succeeded else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_int = 0;
	hash_node_t *tmp = NULL, *zmp = NULL;

	if (ht == NULL || !key || !value || !*key)
		return (0);
	key_int = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[key_int];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
		}
	tmp = tmp->next;
	}
	zmp = malloc(sizeof(hash_node_t));
	if (zmp == NULL)
		return (0);

	zmp->key = strdup(key);
	zmp->value = strdup(value);
	zmp->next = NULL;
	tmp = zmp;
	return (1);
}
