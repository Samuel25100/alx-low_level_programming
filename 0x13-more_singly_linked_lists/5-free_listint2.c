#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: the pointer to first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	if (head != NULL)
	{
	temp2 = *head;
	while (temp2 != NULL)
		{
		temp = temp2;
		temp2 = temp2->next;
		free(temp);
		}
	*head = NULL;
	}
}
