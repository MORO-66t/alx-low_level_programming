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
for (; i <= 9; i++)
{putchar(i + '0'); }
putchar('\n');
return (0);
}
