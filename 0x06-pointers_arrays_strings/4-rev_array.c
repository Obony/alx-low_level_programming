#include "main.h"

/**
  *reverse_array - reverses an array of integers
  *@a: array
  *@n: number of elements in array
  *Return: rev
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
