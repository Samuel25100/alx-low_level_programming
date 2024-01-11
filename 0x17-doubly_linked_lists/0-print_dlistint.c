#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	int num = 0, x = 0;

	for (x = 0; head; x++)
	{
	num = head->n;
	printf("%d\n", num);
	head = head->next;
	}
	return (x);
}
