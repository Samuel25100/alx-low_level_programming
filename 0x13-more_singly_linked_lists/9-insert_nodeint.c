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
	listint_t *atindx, *befoindx, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	atindx = *head;

	if (idx != 0)
	{
		while (atindx != NULL)
		{
		if (count == (idx - 1))
			befoindx = atindx;
		if (count == idx)
			break;
		atindx = atindx->next;
		count++;
		}
	}
	if (count < indx)
		return (NULL);
	if ((befoindx == NULL) && (idx != 0))
	{
	return (NULL);
	}
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	}
	else
	{
	new_node->next = atindx;
	befoindx->next = new_node;
	}
	return (new_node);
}
