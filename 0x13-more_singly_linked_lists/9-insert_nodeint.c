#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: pointer list
 * @idx: index to insert at
 * @n: element to insert
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;

	temp = *head;

	if (head == NULL && idx == '\0')
		return (NULL);

	if (idx == 0)
	{
		new = add_nodeint(head, n);
		return (new);
	}

	while (i < (idx - 1) && temp)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;

	temp->next = new;

	return (new);
}
/**
 * add_nodeint - adds an element at the beginning
 * @head: pointer to list
 * @n:element to be added
 *
 * Return: new element address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
