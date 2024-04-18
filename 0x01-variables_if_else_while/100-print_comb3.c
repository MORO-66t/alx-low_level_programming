#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: A C programe that prints with put function
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
int j;
for (; i < 9; i++)
{
j = i + 1;
for (; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i == 8 && j == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
