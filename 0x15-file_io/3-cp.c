#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * read_file - function that reads a file into a buffer
 * @file: file to read from
 * @buf: pointer to a pointer of a buffer.
 * @fd: file descriptor
 *
 * Return: the number of bytes read.
 */
static ssize_t read_file(const char *file, char **buf, int fd)
{
ssize_t r;
if (fd < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}
if (!(*buf))
{
*buf = malloc(sizeof(char) * BUFSIZE);
if (!(*buf))
{
dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
exit(98);
}
}
r = read(fd, *buf, BUFSIZE);
return (r);
}
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
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
 * main - copy a file's contents to another file
 * @argc: the argument count
 * @argv: the argument values
 *
 * Return: 0 on success, 97-100 on failure.
 */
int main(int argc, char *argv[])
{
int source_file, target_file;
ssize_t bytes_read;
char *buffer = NULL;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
source_file = open(argv[1], O_RDONLY);
if (source_file < 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
target_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (target_file < 0)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close_file(source_file);
exit(99);
}
while ((bytes_read = read_file(argv[1], &buffer, source_file)))
{
if (bytes_read < 0)
{
close_file(source_file);
close_file(target_file);
exit(99);
}
if (write(target_file, buffer, bytes_read) != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close_file(source_file);
close_file(target_file);
exit(99);
}
}
close_file(source_file);
close_file(target_file);
return (0);
}
