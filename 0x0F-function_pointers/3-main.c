#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - This program performs simple mathematical computations
 * @argc: The number of arguments passed from the command line
 * @argv: An array containing the arguments passed from the command line
 * Return: 0 if successful, 98 for incorrect number of arguments,
 * 100 for error of division by 0
 */

int main(int argc, char *argv[])
{
	char *s, operator;
	int a, b, ans;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2][0];
	if ((operator != '*' && operator != '+' && operator != '-'
	     && operator != '/'  && operator != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((operator == '/' || operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	s = argv[2];
	p = get_op_func(s);
	ans = (*p)(a, b);
	printf("%d\n", ans);
	return (0);
}
