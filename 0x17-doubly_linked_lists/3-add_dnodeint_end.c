#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: pointer to head
 * @n: data to be inserted in linked list
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
		temp = temp->next;
		}
	new->prev = temp;
	temp->next = new;
	}
	return (new);
}
