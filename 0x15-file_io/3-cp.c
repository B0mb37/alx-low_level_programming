#include "main.h"



/**
 * error_exit - exits with a given code, message and file
 */
void error_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}




/**
 * copy_file_content - function that copies fle content to another
 * @file_from: the file to copy from
 * @file_to: file to copy to
 */
void copy_file_content(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	mode_t old_mask;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	old_mask = umask(0);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		error_exit(98, "Error: Can't write to %s\n", file_to);
	umask(old_mask);
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit(98, "Error: Can't write to %s\n", file_to);
	}
	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	if (close(fd_from) == -1 || close(fd_to) == 1)
		error_exit(100, "Error: Can't close fd\n", file_to);
}



/**
 * main - runs the code with arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
		error_exit(97, "Usage: %s file_from _file_to\n", argv[0]);
	copy_file_content(file_from, file_to);

	return (0);
}
