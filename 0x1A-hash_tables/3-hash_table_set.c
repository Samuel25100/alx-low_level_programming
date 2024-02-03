#include "hash_tables.h"
int add_node(hash_table_t *ht, const char *key, const char *value);
/**
 * hash_table_set - add element to the hash table
 * @ht: pointer to the hash table created
 * @key: the key to the new value
 * @value: the value that need to stored
 * Return: 1 succeeded else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int result;

	if (ht == NULL || !key || !value || !*key)
		return (0);

	result = add_node(ht, key, value);
	return (result);
}
/**
 * add_node - add new node
 * @ht: the pointer to hash table
 * @key: the key
 * @value: value to be add in hash table
 * Return: 1 on success else 0
 */
int add_node(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL, *zmp = NULL;
	char *val;
	unsigned long int key_int = 0;

	key_int = key_index((const unsigned char *)key, ht->size);
	val = strdup(value);
	if (val == NULL)
		return (0);
if (ht->array[key_int] == NULL)
{
	zmp = calloc(1, sizeof(hash_node_t));
	if (zmp == NULL)
	{
	free(val);
	return (0);
	}
	zmp->key = strdup(key);
	zmp->value = val;
	zmp->next = NULL;
	ht->array[key_int] = zmp;
	return (1);
}
	tmp = ht->array[key_int];

if (tmp != NULL)
{
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
		free(tmp->value);
		tmp->value = val;
		return (1);
		}
		if (tmp->next == NULL)
			break;
		tmp = tmp->next;
	}
	zmp = calloc(1, sizeof(hash_node_t));
	zmp->value = tmp->value;
	zmp->key = tmp->key;
	tmp->value = val;
	tmp->key = strdup(key);
	tmp->next = zmp;
}
	return (1);
}
