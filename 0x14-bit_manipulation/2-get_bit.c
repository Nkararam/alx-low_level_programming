#include <stdio.h>
#include "main.h"
/**
* get_bit - returns the value of a bit at a given index.
* @index: index of n to get bit from.
* @n: number to search.
* Return: bit at index'
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int y;
if (index > 63)
{
return (-1);
}
y = (n >> index) & 1;
return (y);
}
