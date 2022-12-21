#include "main.h"

/**
  *_strcat - concatenates two strings
  *@dest: copy to
  *@src: copy from
  *Return: pointer to dest
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
