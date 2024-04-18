#include "main.h"
/**
* set_bit - gets the bit at the index
*@n: the number to index
*@index: the bit to get
*Return: the bit state or -1 on error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (!!(*n |= 1L << index));
}
