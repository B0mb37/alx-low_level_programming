#include "main.h"

/**
 * read_textfile - func that reads a texxtfile and prints it to the POSIX
 * @filename: pointer to name of file
 * @letters: number of letters to be read and printed
 * Return: 0 or bytesRead (number of bytes that could be read)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytesRead = read(fd, buffer, letters);

	if (bytesRead == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead)

	if (bytesritten == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytesRead);
}
