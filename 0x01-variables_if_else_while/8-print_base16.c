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

for (; i < 10; i++)
{
putchar(i + '0');
}

for (j = 97; j < 103; j++)
{
putchar(j);
}

putchar('\n');

return (0);
}
