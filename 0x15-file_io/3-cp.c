#include "main.h"

/**
 * copies_content - function
 * Description: copies content from one file to another
 * @argv: array of strings
 * @argc: arguments passed
 *
 * Return: 0 success
 */
int copies_content(char *argv[], int argc)
{
	char sf[BUFFER_SIZE];
	struct stat cs;
	int rBytes, wBytes, shut_status, f1, f2;
	/*f1 if file_from and f2 represents file_to*/

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
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	/*open destination file*/
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f2 == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	/*if all conditions are met, the loop will be executed*/
	while ((rBytes = read(f1, sf, BUFFER_SIZE)) > 0)
	wBytes = write(f2, sf, rBytes);
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
	shut_status = close(f1);
	if (shut_status == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
	exit(100);
	}
	shut_status = close(f2);
	if (shut_status == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
	exit(100);
	}

	return (0);
}
