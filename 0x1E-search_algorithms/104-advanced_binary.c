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
 * first_value - finds first occurrence of value in array
 * @array: array to search in
 * @value: value to search for
 * @index: current index
 *
 * Return: value's first occurence index
 */
int first_value(int *array, int value, int index)
{
	if (!array)
		return (index);

	if (index < 0 || array[index] != value)
		return (index + 1);
	return (first_value(array, value, index - 1));
}

/**
 * binary_search - binary search using recursion
 * @array: array to search in
 * @value: value to search for
 * @left: left index
 * @right: right index
 *
 * Return: index of value if it exists
 */
int binary_search(int *array, int value, int left, int right)
{
	int mid;

	if (!array || left > right)
		return (-1);

	print_array(array, left, right);
	/* mid = (left + right) / 2; */
	mid = left + ((right - left) / 2);
	if (array[mid] == value)
		return (first_value(array, value, mid));

	if (array[mid] < value)
		return (binary_search(array, value, mid + 1, right));
	else
		return (binary_search(array, value, left, mid - 1));
}

/**
 * advanced_binary - searches for value using advanced binary search algorithm
 * @array: array to search in
 * @size: array's size
 * @value: value to search for
 *
 * Return: value's index (Exists) | -1 (Not Exists)
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_search(array, value, 0, (int)size - 1));
}
