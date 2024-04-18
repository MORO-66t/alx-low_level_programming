#include "main.h"
/**
* _strpbrk - Search a string for any of a set of bytes.
*@accept: string to match
*Return: Pointer to the byte in s that matches
* @s: input
*one of the bytes in accept
*or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
int it, jt;
char *p;
it = 0;
while (s[it] != '\0')
{
jt = 0;
while (accept[jt] != '\0')
{
if (accept[jt] == s[it])
{
p = &s[it];
return (p);
}
jt++;
}
it++;
}
return (0);
}
