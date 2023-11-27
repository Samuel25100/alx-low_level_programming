#include "main.h"
/**
 * error_handler - handle errors of main function
 * @file_from: argument 1
 * @file_to: argument 2
 * @argv: the array of each argument
 * Return: void
 */
void error_handler(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: num of argument
 * @argv: the array of each argument
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int file_from, file_to, close_err;
	ssize_t bytesRead, bytesWrite;
	char buf[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);

		error_handler(file_from, file_to, argv);

	bytesRead = read(file_from, buf, 1024);
	if (bytesRead == -1)
		error_handler(-1, 0, argv);

	bytesWrite = write(file_to, buf, bytesRead);
	if (bytesWrite == -1)
		error_handler(0, -1, argv);

	close_err = close(file_from);
	if (close_err == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	exit(100);
	}
	return (0);
}
