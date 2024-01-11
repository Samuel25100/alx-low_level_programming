#include "lists.h"
/**
 * dlistint_len - give the number of elements in dlistint_t list
 * @h: pointer to head
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t c = 0;

	for (c = 0; head; c++)
	{
	head = head->next;
	}
	return (c);
}
