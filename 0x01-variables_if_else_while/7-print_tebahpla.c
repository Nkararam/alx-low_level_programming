#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
