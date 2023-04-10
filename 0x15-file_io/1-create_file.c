#include "main.h"
#include <stdlib.h>
/**
 * create_file - creates new file
 * @filename: name of the new file
 * @text_content: content to write into the new file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, wt, size;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (size = 0; text_content[size]; size++)
;
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

wt = write(fd, text_content, size);
if (wt == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
