#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at index of a dlistint_t
 * @head: pointer to head
 * @index: the index
 * Return: 1 succeed else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *temp1 = NULL, *temp2 = NULL, *h = *head;

	for (; c < index; c++)
	{
	h = h->next;
	}
	if (h == NULL)
		return (-1);
	if (h->prev != NULL)
		temp1 = h->prev;
	if (h->next != NULL)
		temp2 = h->next;
	if (temp1 != NULL)
		temp1->next = temp2;
	else
		*head = temp2;
	if (temp2 != NULL)
		temp2->prev = temp1;

	free(h);
	return (1);
}
