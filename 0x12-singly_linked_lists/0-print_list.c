#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointers to link head
 * Return: - number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	h = h->next;
	node++;
	}
	return (node);
}
