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
char *to_print;
ssize_t wt, rd;
int file;

file = open(filename, O_RDONLY);
if (filename == NULL)
return (0);
to_print = malloc(sizeof(char) * letters);
rd = read(file, to_print, letters);
wt = write(STDOUT_FILENO, to_print, rd);
free(to_print);
close(file);
return (wt);
}
