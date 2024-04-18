
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that prints the lowercase and uppercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 97;
int j;

for (; i < 123; i++)
{
putchar(i);
}

for (j = 65; j < 91; j++)
{
putchar(j);
}

putchar('\n');

return (0);
}
