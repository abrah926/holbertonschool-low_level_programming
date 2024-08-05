#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the standard output
 *
 * @filename: filename (string pointer)
 * @letters: number of letters printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	read_count = read(fd, buff, letters);
	if (read_count == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	write_count = write(STDOUT_FILENO, buff, read_count);
	if (write_count == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);

	return (write_count);
	}

