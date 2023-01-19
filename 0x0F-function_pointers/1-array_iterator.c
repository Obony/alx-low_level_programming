#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - This function executes a function given as a
 * parameter on each element of an array
 * @array: The array to print from
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		;
	else
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
