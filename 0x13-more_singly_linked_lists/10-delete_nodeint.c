#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: the pointer to the head node
 * @index: the index of liked list nodes
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *nex;

	prev = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}
	nex = prev->next;
	if (index != 0)
	{
		prev->next = nex->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = nex;
	}
	return (1);
}
