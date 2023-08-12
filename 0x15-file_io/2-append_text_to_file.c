#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of
 * the fileNULL terminated string to add at the end of the file
 * Return: 1 (success) or -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytesWritten;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
		bytesWritten = write(file_descriptor, text_content, strlen(text_content));
	close(file_descriptor);
	if (bytesWritten == -1)
		return (-1);
	return (-1);
}
