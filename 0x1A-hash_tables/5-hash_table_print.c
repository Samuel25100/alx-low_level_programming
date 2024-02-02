#include "hash_tables.h"
/**
 * hash_table_print - print all hash table
 * @ht: the pointer to the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
	if (ht->array[i] != NULL)
	{
	if (flag == 1)
		printf(", ");
	tmp = ht->array[i];
		while (tmp)
		{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->next;
		if (tmp)
			printf(", ");
		}
	flag = 1;
	}
	}
	printf("}\n");
}
