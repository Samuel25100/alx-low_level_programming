#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer of head node
 * @idx: the index of linked list where new node add
 * @n: the data the new node will held
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *temp1, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
	if (count == (idx - 1))
		temp1 = temp;
	if (count == idx)
		break;
	temp = temp->next;
	count++;
	}
	new_node->next = temp;
	new_node->n = n;
	temp1->next = new_node;
	return (new_node);
}
