#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the index
 * @head: pointer to the list
 * @index: node to be printed
 *
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
