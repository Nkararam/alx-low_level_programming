#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all single numbr of base 10
 * starting from 0,followed by a newline
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putcher(' ');
		}
	}
	putchar('\n');
	return (0);
}
