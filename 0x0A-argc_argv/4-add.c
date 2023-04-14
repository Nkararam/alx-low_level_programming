#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * check_num - check if string contains only digits
 * @str: array str
 * Return: 1 if string contains only digits, 0 otherwise
 */
int check_num(char *str)
{
unsigned int count;

count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}

/**
 * main - add positive numbers
 * @argc: count of arguments
 * @argv: arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int count, str_to_int, sum;

sum = 0;
for (count = 1; count < argc; count++)
{
if (check_num(argv[count]) && strcmp(argv[count], "0") >= 0)
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
