#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read text file print to STDOUT
 * @filename: body of text to print
 * @letters: number of characters to be read and printed
 * Return: total number of characters to print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t wt, rd;
int file;

file = open(filename, O_RDONLY);
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
rd = read(file, buffer, letters);
if (rd < 0)
{
free(buffer);
return (0);
}
wt = write(STDOUT_FILENO, buffer, rd);
if (wt < rd)
{
free (buffer);
return (0);
}
free(buffer);
close(file);
return (wt);
}
