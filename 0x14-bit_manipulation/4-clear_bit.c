#include <stdio.h>
#include "main.h"
/**
* clear_bit - sets the value of a bit to 0 at a given index.
* @index: index to set to 0
* @n: pointer to the number of change
* Return: 1 on success and -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int z;
if (index > 63)
{
return (-1);
}
z = 1 << index;
*n = ~z & *n;
return (1);
}
