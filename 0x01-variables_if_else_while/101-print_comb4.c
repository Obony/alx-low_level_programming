#include <stdio.h>

/**
  *main - print three digit combinations
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	int n;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			if (n > i)
			{
				for (j = 48; j < 58; j++)
				{
					if (j > n)
					{

				
						putchar(i);
		
						putchar(n);
				
						putchar(j);
				if (i == 55 && n == 56 && j == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
				}

			}

		}
	}
	putchar('\n');

	return (0);
}
