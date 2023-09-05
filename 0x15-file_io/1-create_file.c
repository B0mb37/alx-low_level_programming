#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of fle
 * @text_content: string to write in file
 * Return: 1 (success) -1 (failed)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytesWritten, len;

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
