#include"main.h"
#define BUFFER_SIZE 1024
#include <stdarg.h>
/**
 * print_error - Print error messages based on the error code
 * @error_code: The error code to determine the message to be printed
 * @file_name: The name of the file related to the error
 * Return: void
 */

void error_exit(int code, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    dprintf(STDERR_FILENO, format, args);
    va_end(args);
    exit(code);
}
/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, various error codes on failure
 */

int main(int argc, char *argv[])
{
    const char *file_from, *file_to;
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3)
    {
        error_exit(97, "Usage: cp file_from file_to\n");
    }

    file_from = argv[1];
    file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        error_exit(98, "Error: Can't read from file %s\n", file_from);
    }

    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1)
    {
        close(fd_from);
        error_exit(99, "Error: Can't write to file %s\n", file_to);
    }
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            close(fd_from);
            close(fd_to);
            error_exit(99, "Error: Can't write to file %s\n", file_to);
        }
    }

    if (bytes_read == -1)
    {
        close(fd_from);
        close(fd_to);
        error_exit(98, "Error: Can't read from file %s\n", file_from);
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