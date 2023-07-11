#include <stdio.h>
#include "search_algos.h"


/**
 * interpolation_search - searches for value using Interpolation search
 * @array: array to search in
 * @size: array's size
 * @value: value to search for
 *
 * Return: value's index (Exists) | -1 (Not Exists)
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array)
		return (-1);

	low = 0, high = size - 1;
	while (low <= size)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] ", pos);
		if (pos >= low && pos <= high)
			printf("= [%d]\n", array[pos]);
		else
		{
			printf("is out of range\n");
			break;
		}

		if (array[pos] == value)
			return ((int)pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
