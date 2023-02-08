#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content to put in the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fp = fopen(filename, "w");

	if (fp == NULL)
		return (-1);
	chmod(filename, 0600);

	while (text_content[i] != '\0')
	{
		putc(text_content[i], fp);
		i++;
	}
	fclose(fp);
	return (1);

}
