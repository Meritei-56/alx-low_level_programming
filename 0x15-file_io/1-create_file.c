#include "main.h"

/**
 * create_file - function
 * Description: creates a file
 * @filename: file created
 * @text_content: null terminated string
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t Nbytes = 0;
	int fd, lf;
	mode_t fperm;

	if (filename == NULL) /*check whether file is null*/
	{
	return (-1);
	}
	fperm = S_IRUSR | S_IWUSR;
	/*function provides the read and write permission*/
	lf = O_WRONLY | O_CREAT | O_TRUNC;
	fd = open(filename, lf, fperm);
	/* a file for writing or trunctate if necessary has been created*/
	if (fd == -1)
	{
	return (-1);
	}
	/*write to file if text_content is non null*/
	if (text_content != NULL)
	{
	Nbytes = write(fd, text_content, strlen(text_content));
	if (Nbytes == -1)
	{
	close(fd);
	return (-1);
	}
	}
	if (close(fd) == -1)
	{
	return (-1);
	}
	return (1);

}

