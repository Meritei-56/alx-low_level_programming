#include "main.h"

/**
 * read_textfile - function
 * Description: reads and prints a textfile to the POSIX
 * @filename: name of file
 * @letters: number of letters to be read
 *
 * Return: 0 if it fails, otherwise number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t Nread, Nwrite;
	char *ch;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}

	ch = (char *) malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		close(fp);
		return (0);
	}
	Nread = read(fp, ch, letters);
	if (Nread == -1)
	{
		close(fp);
		free(ch);
		return (0);
	}
	Nwrite = write(STDOUT_FILENO, ch, Nread);
	if (Nwrite == -1 || Nwrite != Nread)
	{
		close(fp);
		free(ch);
		return (0);
	}
	close(fp);
	free(ch);
	return (Nwrite);
}


