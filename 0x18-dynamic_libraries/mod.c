#include <stdio.h>
/*
 * mod - returns the remainder
 */
void mod(int a, int b)
{
	int result = a % b;

	printf("%d %% %d = %d\n", a, b, result);
}
