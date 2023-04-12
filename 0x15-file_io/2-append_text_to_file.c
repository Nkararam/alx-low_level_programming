#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the pointer of the name of a file
 * @text_content: string to add to the end of the file
 * Return: 1 (succes) and -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len, w;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
for (len = 0; text_content[len]; len++)
;
w = write(fd, text_content, len);
if (w == -1 || w != len)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
