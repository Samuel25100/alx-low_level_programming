#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head node
 * @str: string data to be add in node
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
		list_t *new_node, *temp;
	size_t num_ch = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[num_ch])
		num_ch++;
	new_node->len = num_ch;
	new_node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
