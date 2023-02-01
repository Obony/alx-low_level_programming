#include "lists.h"

/**
 * pop_listint - frees the head node of a list
 * @head: double pointer to the list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;

	*head = (*head)->next;
	i = temp->n;
	free(temp);

	return (i);
}
