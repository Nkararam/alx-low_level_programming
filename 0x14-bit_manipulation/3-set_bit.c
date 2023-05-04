#include <stdio.h>
#include "main.h"
/**
* set_bit - sets the value of a bit to 1 at a given index.
* @index: index to set to 1
* @n: pointer to integer
* Return: 1 on success and -1 if failed
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int z;
if (index > 63)
{
return (-1);
}
z = 1 << index;
*n = z | *n;
return (1);
}
