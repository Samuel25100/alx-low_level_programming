#include "lists.h"
/**
 * print_listint - print all element of node listint_t *h
 * @h: the pointer to the node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
