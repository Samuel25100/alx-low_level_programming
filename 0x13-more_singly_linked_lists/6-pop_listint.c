#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list, and
 * returns the head node’s data (n)
 * @head: the pointer to head node
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *hea;
	int data;

	if (*head == NULL)
		return (0);

	hea = *head;
	temp = hea->next;
	data = hea->n;
	free(hea);
	*head =  temp;
	return (data);
}
