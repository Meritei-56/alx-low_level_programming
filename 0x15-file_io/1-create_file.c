#include "main.h"

/**
 * create_file - function
 * Description: creates a file
 * @filename: name of file to be created
 * @text_content: null terminated string
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, fl;
	ssize_t bytsNu = 0;
	mode_t perm;

	/*determine whether file is null*/
	if (filename == NULL)
	{
		return (-1);
	}
	/*change file permission to read and write*/
	perm = S_IRUSR | S_IWUSR;

	/*open or create file for writing, truncate if necessary*/
	fl = O_WRONLY | O_CREAT | O_TRUNC;
	fp = open(filename, fl, perm);

	/*check to determine if successfully opened*/
	if (fp == -1)
	{
		return (-1);
	}
	/*proceed to write if text_content is not null*/
	if (text_content != NULL)
	{
		bytsNu = write(fp, text_content, strlen(text_content));
		if (bytsNu == -1)/*check wether write call is successful*/
		{
			close(fp);
			return (-1); /*if unsuccessful, file is closed*/
		}
	}
	if (close(fp) == -1) /*file is closed, -1 returned if unsuccessful*/
	{
		return (-1);
	}
	/*if operation is successful, return 1*/
	return (1);
}

