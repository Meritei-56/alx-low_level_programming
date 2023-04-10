#include "main.h"

/**
 * append_text_to_file - function
 * Description: appends text at end of file
 * @filename: name of file
 * @text_content: null terminated string
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int output;
	FILE *fd;

	/*check whether file is null*/
	if (filename == NULL)
	{
		return (-1);
	}
	/*check if string is null*/
	if (text_content == NULL)
	{
		return (1);
	}
	/*open file*/
	fd = fopen(filename, "a");
	/*if unsuccessful, return -1*/
	if (fd == NULL)
	{
		return (-1);
	}
	/*fputs introduced to write the 'text_content'*/
	output = fputs(text_content, fd);
	fclose(fd);

	return ((output == EOF) ? -1 : 1);
}


