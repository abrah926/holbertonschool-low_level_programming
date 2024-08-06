#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with a given code
 * @code: The exit code
 * @msg: The error message
 * @arg: The argument to include in the message (file descriptor or file name)
 */
void error_exit(int code, const char *msg, const char *arg)
{
    dprintf(STDERR_FILENO, msg, arg);
    exit(code);
}

/**
 * main - Entry point of the file copy program
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0 on success, appropriate exit code on failure
 */
int main(int argc, char *argv[])
{
    int fd_from, fd_to, rd, wr;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
        error_exit(97, "Usage: cp file_from file_to\n", "");

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        error_exit(99, "Error: Can't write to %s\n", argv[2]);

    while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        wr = write(fd_to, buffer, rd);
        if (wr == -1)
            error_exit(99, "Error: Can't write to %s\n", argv[2]);
    }
    if (rd == -1)
        error_exit(98, "Error: Can't read from file %s\n", argv[1]);

    if (close(fd_from) == -1)
        error_exit(100, "Error: Can't close fd %d\n", fd_from);

    if (close(fd_to) == -1)
        error_exit(100, "Error: Can't close fd %d\n", fd_to);

    return (0);
}

