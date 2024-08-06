#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits the program.
 * @code: Exit status code.
 * @msg: Format string for the error message.
 * @...: Additional arguments for the format string.
 *
 * Description: Uses vfprintf to print formatted error messages
 * and exits with the provided status code.
 */
void error_exit(int code, const char *msg, ...)
{
	va_list args;

	va_start(args, msg);
	vfprintf(stderr, msg, args);
	va_end(args);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: 0 on success, or appropriate exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 
		      S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
		{
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (read_bytes == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}

