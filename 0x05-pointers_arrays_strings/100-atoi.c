#include "main.h"
/**
 *  _atoi - convert a string to an integer.
 *  @s: the pointer to convert
 *  Return: a integer
 */
int _atoi(char *s)
{

int C = 0;
unsigned int ni = 0;
int min = 1;
int isi = 0;

while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
ni = (ni * 10) + (s[c] - '0');
c++;
}
if (isi == 1)
{
break;
}
c++;
}
}