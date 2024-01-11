#include "lists.h"
/**
 * sum_dlistint - add all the data (n) of a dlistint_t linked list
 * @head: pointer to head
 * Return: sum of all n
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
	result += (head->n);
	head = head->next;
	}
	return (result);
}
