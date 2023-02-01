#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: double pointer to the list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t **temp;
	listint_t *tmp;


	tmp = NULL;
	temp = &tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		*temp = *head;
		*head = (*head)->next;
		free(*temp);
	}
}
