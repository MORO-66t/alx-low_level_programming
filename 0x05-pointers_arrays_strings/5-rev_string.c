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
* rev_string - reverse string
*
* @s: string
*/
void rev_string(char *s)
{
int len, t, i;
char tmp[1000];
/* _strlen - len of string*/
len = _strlen(s) - 1;
for (t = 0; len >= 0; len--)
{

tmp[t] = s[len];
t++;
}
i = 0;
len = _strlen(s) - 1;
for (; s[len] != tmp[len]; i++)
{
s[i] = tmp[i];
}
}
