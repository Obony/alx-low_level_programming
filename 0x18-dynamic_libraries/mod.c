#include <stdio.h>

void mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero!\n");
		return;
	}
	printf("a %% b = %d\n", a % b);
}
