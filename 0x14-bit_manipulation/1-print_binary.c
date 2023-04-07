#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int current = n;
int number = 0;
if ((n >> 1) & 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
while (current > 0)
{
number++;
current = current >> 1;
for (int i = number - 1; i >= 0; i--)
{
if ((n >> i) & 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
}
}
}
