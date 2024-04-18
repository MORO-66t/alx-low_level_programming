#include "function_pointers.h"

/**
* int_index - check if a number is equal to 98
* @array: the integer to check
*@size: size
*@cmp: fun
* Return: 0 if false, something else otherwise.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}

return (-1);
}
