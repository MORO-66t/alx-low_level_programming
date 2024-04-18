#include "main.h"
/**
*_strlen - leanth
*@s: smash
*Return: to leanth
*/
int _strlen(char *s)
{
{
int i;
for (i = 0; s[i] != '\0';)
{
i++;
}
return (i);
}
}
/**
* print_rev - reverse string
*
* @s: string
*/
void print_rev(char *s)
{
int len;
len = _strlen(s) - 1;
for (; len >= 0; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
