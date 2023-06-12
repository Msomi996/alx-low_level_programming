#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - places 1024 bytes for a buffer.
 * @file: name of the file buffer is preparing chars for.
 *
 * Return: A pointer to the newly-placed buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - exits file descriptors.
 * @fd: The file descriptor to be exited.
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - duplicates the contents of a file to another file.
 * @argc: The number of argc provided to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argc count is wrong - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be made or written to - exit code 99.
 * If file_to or file_from cannot be exited - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, n, g;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	n = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		g = write(to, buffer, n);
		if (to == -1 || g == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		n = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (n > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
