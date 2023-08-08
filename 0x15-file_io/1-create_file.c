#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: String to write to file
 * Return: 1 (success) -1 (failed)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len, bytesWritten;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytesWritten = write(fd, text_content, len);

		if (bytesWritten == -1 || bytesWritten != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

