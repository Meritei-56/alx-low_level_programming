#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>


#define BUFFER_SIZE 1024

/**
 * copies_content - function
 * Description: copies content from one file to another
 * @argv: array of strings
 * @argc: arguments passed
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	char sf[BUFFER_SIZE];
	struct stat cs;
	int rBytes, wBytes, shut_status, file_from, file_to;

	/*check if programs was printed and has two arguments*/
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	exit(97);
	}
	/*use stat to acquire information from source file*/
	if (stat(argv[1], &cs) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	/*open source file for reading*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	/*open destination file*/
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	/*if all conditions are met, the loop will be executed*/
	while ((rBytes = read(file_from, sf, BUFFER_SIZE)) > 0)
	wBytes = write(file_to, sf, rBytes);
	if (wBytes == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	if (rBytes == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	shut_status = close(file_from);
	if (shut_status == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
	}
	shut_status = close(file_to);
	if (shut_status == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	exit(100);
	}

	return (0);
}
