#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at index
 * @head: pointer at node
 * @index: the index
 * Return: pointer to nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;

	for (; head; c++)
	{
	if (c == index)
		break;
	head = head->next;
	}
	return (head);
}
