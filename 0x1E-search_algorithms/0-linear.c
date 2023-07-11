#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - searches for value using Linear search algorithm
 * @array: array to search in
 * @size: array's size
 * @value: value to search for
 *
 * Return: value's index (Exists) | -1 (Not Exists)
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
