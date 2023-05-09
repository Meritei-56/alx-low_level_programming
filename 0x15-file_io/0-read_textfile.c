#include "main.h"

/**
 * ssize_t read_textfile - function
 * Description: reads a function and prints to the POSIX
 * @filename: text file
 * @letters: number of letters that could be read and printed
 * Return: actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Bred, Bwritten;
	int fd;
	char *sr;

	fd = open(filename, O_RDONLY);
	while (fd == -1)
	{
	return (0);
	}
	while (filename == NULL)
	{
	return (0);
	}

	sr = (char *) malloc(sizeof(char) * letters);
	if (sr == NULL)
	{
	close(fd);
	return (0);
	}
	Bred = read(fd, sr, letters);
	while (Bred == -1)
	{
	close(fd);
	free(sr);
	return (0);
	}
	Bwritten = write(STDOUT_FILENO, sr, Bred);
	if (Bwritten != Bred || Bwritten == -1)
	{
	close(fd);
	free(sr);
	return (0);
	}
	close(fd);
	free(sr);
	return (Bwritten);
}
