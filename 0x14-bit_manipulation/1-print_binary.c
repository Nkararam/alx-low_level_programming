#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int bits = sizeof(unsigned long int) * 8;
int i, printed = 0;

for (i = bits - 1; i >= 0; i--)
{
if ((n >> i) & 1)
{
_putchar('1');
printed = 1;
}
else if (printed)
{
_putchar('0');
}
}

if (!printed)
{
_putchar('0');
}
}
