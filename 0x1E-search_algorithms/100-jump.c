#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for value using Jump search algorithm
 * @array: array to be searched
 * @size: array's size
 * @value: value to searched for
 *
 * Return: value's index (Exists) | -1 (Not Exists)
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, i;

	if (!array)
		return (-1);

	end = 0, i = sqrt(size);
	while (end < size)
	{
		if (array[end] >= value)
			break;
		start = end, end += i;
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	if (end >= size)
		end = size - 1;

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
