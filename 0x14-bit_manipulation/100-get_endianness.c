#include "main.h"
/**
* get_endianness - gets the bit at the index
*Return: the bit state or -1 on error
*/
int get_endianness(void)
{
unsigned long int n = 1;
return (*(char *)&n);
}
