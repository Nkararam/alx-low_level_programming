#include "main.h"
/**
 *  _atoi - convert a string to an integer.
 *  @s: the pointer to convert
 *  Return: a integer
 */
int _atoi(char *s)
{

int c = 0;
unsigned int ni = 0;
int min = 1;
int iSi = 0;

while (S[c])
{
if (S[c] == 45)
{
min *= -1;
}
while (S[c] >= 48 && S[c] <= 57)
{

ni = (ni * 10) + (S[c] - '0');
C++;
}
if (iSi == 1)
{
break;
}
C++;
}

