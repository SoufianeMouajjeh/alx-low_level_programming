#include"main.h"
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text content to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
    size_t text_length;
    size_t bytes_written;
    FILE *file;

    if (filename == NULL) {
        return (-1);
    if (text_content == NULL) {
        return (1);
    }

    file = fopen(filename, "a");
    if (file == NULL) {
        return (-1);
    }

    text_length = strlen(text_content);
    bytes_written = fwrite(text_content, 1, text_length, file);

    if (bytes_written != text_length) {
        fclose(file);
        return (-1);
    }

    fclose(file);
    return (1);
}