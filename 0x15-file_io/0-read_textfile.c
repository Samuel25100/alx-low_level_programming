#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: the name of the file or address
 * @letters: the size of the file letters
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytesRead;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
	{
		return (0);
	}
	bytesRead = read(fd, buf, letters);
	bytesRead = write(STDOUT_FILENO, buf, bytesRead);
	close(fd);
	free(buf);
	return (bytesRead);
}
