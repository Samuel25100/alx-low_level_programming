#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of node
 * @index: the index of the nodes in liked list
 * Return: the data at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	while (head != NULL)
	{
	if (count == index)
		break;
	head = head->next;
	count++;
	}
	if (count < index)
		return (NULL);
	return (head);
}