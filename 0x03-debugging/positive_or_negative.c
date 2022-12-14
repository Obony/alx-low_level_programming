#include <stdio.h>

/**
  *main - Prints if a number is positive, negative or zero
  *
  *Return: Always 0 (Success)
  */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
}
