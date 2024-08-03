#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 *
 * @filename: The name of the file to read from.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         Returns 0 on failure or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t nread, nwrite;
    char *buffer;

    if (filename == NULL)
        return (0);

    /* Allocate memory for buffer */
    buffer = malloc(letters);
    if (buffer == NULL)
        return (0);

    /* Open the file for reading */
    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        free(buffer);
        return (0);
    }

    /* Read from the file */
    nread = read(fd, buffer, letters);
    if (nread < 0)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    /* Write to stdout */
    nwrite = write(STDOUT_FILENO, buffer, nread);
    if (nwrite < 0 || nwrite != nread)
    {
        close(fd);
        free(buffer);
        return (0);
    }

    /* Clean up and return number of letters read and printed */
    close(fd);
    free(buffer);
    return (nwrite);
}

