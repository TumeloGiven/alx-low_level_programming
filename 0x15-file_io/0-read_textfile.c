#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function reads text file print to STDOUT.
 * @filename: text file being passed
 * @letters: number of letters
 * Return: w- number of bytes read and printed
 *        0 on fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t var;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	var = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (var);
}
