#include "main.h"
/**
 *  flip_bits -  gets the number of bits flipped form n to m
 *  @n: first number
 *  @m: second number
 *  Return: number of the bits need to flip from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
int i, count = 0;
unsigned long int current;
unsigned long int xor = n ^ m;
for (i = 63; i >= 0; i++)
{
current = xor >> i;
if (current & 1)
count++;
}
return (count);
}
