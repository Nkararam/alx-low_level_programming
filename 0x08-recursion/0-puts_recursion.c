#include "main.h"
/**
 *  _puts_recursion - print a string, followed by a new line.
 *  @s: the sring to print
 *  Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\0');
return;
}
_putchat(*s);
s++;
_puts_recursion(s);
}
