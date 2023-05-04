#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*
*/
void print_binary(unsigned long int n)
{
int bits = sizeof(unsigned long int) * 8;
int i, count = 0;
int i, count = 0, printed = 0;
for (i = bits - 1; i >= 0; i--)
{
if ((n >> i) & 1)
{
break;
}
}
for (; i >= 0; i--)
{
if ((n >> i) & 1)
{
_putchar('1');
count++;
printed = 1;
}
else if (printed)
{
_putchar('0');
}
}
if (!count)
{
_putchar('0');
}
}
