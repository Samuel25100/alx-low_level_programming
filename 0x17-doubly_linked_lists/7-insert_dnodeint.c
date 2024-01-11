#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head
 * @idx: index
 * @n: the data to be insert
 * Return: pointer of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int c = 2;
	dlistint_t *new = NULL, *temp = NULL, *head = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (; c <= idx; c++)
	{
		head = head->next;
	}
	new->next = head->next;
	temp = head->next;
	temp->prev = new;
	head->next = new;
	new->prev = head;
	return (new);
}
