#include "main.h"
#include <stdio.h>
/**
 * get_endianness -  checks the endianness of the machine if little or big
 * Return: 1 if little or 0 if big
 */
int get_endianness(void)
{
unsigned int y = 1;
char *c = (char *) &y;
return (*c);
}
