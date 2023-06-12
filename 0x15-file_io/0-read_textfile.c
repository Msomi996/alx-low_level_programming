#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reviews text file output to STDOUT.
 * @filename: text file being reviewed
 * @letters: num of letters to be reviewed
 * Return: w- actual num of bytes reviewed and returned
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t g;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	g = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (g);
}
