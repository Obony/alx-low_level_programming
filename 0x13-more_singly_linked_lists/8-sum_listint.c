#include "lists.h"

/**
 * sum_listint - returns the sum of data in a list
 * @head: pointer to the list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int n, sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n = head->n;
		sum = sum + n;
		head = head->next;
	}
	return (sum);
}
