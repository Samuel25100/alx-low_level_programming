#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head
 * @n: the data to be added into new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
		new->next = *head;
	else
		new->next = NULL;
	if (*head != NULL)
		new->prev = (*head)->prev;
	else
		 new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
