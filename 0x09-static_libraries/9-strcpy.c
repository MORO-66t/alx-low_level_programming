#include "main.h"
/**
*_strcpy - copy to another function
*@dest: string parameter input
* @src : string parameter input
*Return: Noting
*/

char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (original_dest);
}
