#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buffer;
    ssize_t bytes_read;
    ssize_t bytes_written;
    FILE *file;

    if (filename == NULL)
    {
        return (0);
    }

    file = fopen(filename, "r");
    if (file == NULL)
    {
        return (0);
    }

    buffer = (char *)malloc(letters + 1);
    if (buffer == NULL)
    {
        fclose(file);
        return (0);
    }

    bytes_read = fread(buffer, 1, letters, file);
    if (bytes_read == -1)
    {
        free(buffer);
        fclose(file);
        return (0);
    }

    buffer[bytes_read] = '\0';

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    free(buffer);
    fclose(file);

    if (bytes_written != bytes_read)
    {
        return (0);
    }
    return bytes_written;
}