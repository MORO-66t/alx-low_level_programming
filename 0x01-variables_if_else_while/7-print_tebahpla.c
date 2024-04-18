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
int i = 122;

for (; i > 96; i--)
{
putchar(i);
}

putchar('\n');

return (0);
}
