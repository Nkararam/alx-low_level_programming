#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the name to print
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
