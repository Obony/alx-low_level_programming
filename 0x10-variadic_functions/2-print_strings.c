#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - This function prints strings, followed by a newline
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * Return: 0 for success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", str);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
