#include "main.h"
/**
 * create_file - creates a file with filename and content
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size_con = 0;
	ssize_t byteRead;

	if (filename == NULL)
	{
	return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IREAD | S_IWRITE);
	if (fd == -1)
	{
	return (-1);
	}
	if (text_content == NULL)
	{
	text_content = "";
	}

	while (text_content[size_con])
		size_con++;

	byteRead = write(fd, text_content, size_con);
	if (byteRead == -1)
	{
	return (-1);
	}
	close(fd);

	return (1);
}
