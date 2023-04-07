#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 */
void print_binary(unsigned long int n)
{
int bits = sizeof(unsigned long int) * 8;
int i, count = 0;
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
}
else
{
_putchar('0');
}
}
}
