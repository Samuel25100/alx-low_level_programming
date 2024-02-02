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
	char *k, *val;

	if (ht == NULL || !key || !value || !*key)
		return (0);

	val = strdup(value);
	key_int = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[key_int];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
		free(tmp->value);
		tmp->value = val;
		return (1);
		}
	tmp = tmp->next;
	}
	/*if tmp is NULL or empty table*/
	zmp = calloc(1, sizeof(hash_node_t));
	if (zmp == NULL)
		return (0);

	k = strdup(key);
	zmp->key = k;
	zmp->value = val;
	zmp->next = NULL;
	ht->array[key_int] = zmp;
	return (1);
}
