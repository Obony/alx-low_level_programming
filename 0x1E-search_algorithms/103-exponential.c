#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints array being searched
 * @array: array
 * @start: starting index
 * @end: ending index
 *
 * Return: void
 */
void print_array(int *array, int start, int end)
{
	int i;

	if (!array || start > end)
		return;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		printf(" %d", array[i]);
		if (i != end)
			printf(",");
		else
			printf("\n");
	}
}

/**
 * exponential_search - searches for value using Exponential search
 * @array: array to search in
 * @size: array's size
 * @value: value to seach for
 *
 * Return: value's index (Exists) | -1 (Not Exists)
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);

	high = 1;
	while (high < size && array[high] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		high *= 2;
	}

	low = high / 2;
	if (high >= size)
		high = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		print_array(array, low, high);

		mid = (low + high) / 2;
		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
