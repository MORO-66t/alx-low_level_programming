#include "main.h"
/**
*_strlen - leanth
*@s: smash
*Return: to leanth
*/
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0';)
{
i++;
}
return (i);
}
/**
*puts_half - prints every character of a string
*@str: string parameter input
*Return : Noting
*/
void puts_half(char *str)
{
int length = _strlen(str);
int start_index, i;

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length + 1) / 2;
}

for (i = start_index; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
