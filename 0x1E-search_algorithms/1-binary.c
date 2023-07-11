#include <stdio.h>

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
 * binary_search - searches for value using Binary search algorithm
 * @array: array to search in
 * @size: array's size
 * @value: value to search for
 *
 * Return: value's index (Exists) | -1 (Not Exists)
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (!array)
		return (-1);

	left = 0, right = (int)size - 1;
	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
