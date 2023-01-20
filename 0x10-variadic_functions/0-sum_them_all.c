#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all the parameters
 * @n: this is the number of parameters passed
 * @...: rest of the variables
 * Return: total of addition
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
