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
int c;
for (; i < 9; i++)
{
j = i + 1;
for (; j < 10; j++)
{
c = j + 1;
for (; c < 10; c++)
{
putchar(i + '0');
putchar(j + '0');
putchar(c + '0');
if (i == 7 && j == 8 && c == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
