#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Function allocates 1024 bytes for a buffer.
 * @file: Name of the file the buffer is storing characters for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *file_buffer;

	file_buffer = malloc(sizeof(char) * 1024);

	if (file_buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (file_buffer);
}

/**
 * close_file - Function Closes file descriptors.
 * @file_descriptor: The file descriptor to be closed.
 */
void close_file(int file_descriptor)
{
	int close_status;

	close_status = close(file_descriptor);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - Function copies contents of a file to another file.
 * @argc: Number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd, read_bytes, write_bytes;
	char *file_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_buffer = create_buffer(argv[2]);
	source_fd = open(argv[1], O_RDONLY);
	read_bytes = read(source_fd, file_buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_fd == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(file_buffer);
			exit(98);
		}

		write_bytes = write(dest_fd, file_buffer, read_bytes);
		if (dest_fd == -1 || write_bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(file_buffer);
			exit(99);
		}

		read_bytes = read(source_fd, file_buffer, 1024);
		dest_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_bytes > 0);

	free(file_buffer);
	close_file(source_fd);
	close_file(dest_fd);

	return (0);
}
