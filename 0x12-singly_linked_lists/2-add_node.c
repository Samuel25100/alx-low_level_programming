#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to first node
 * @str: string data to be add into new node
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
