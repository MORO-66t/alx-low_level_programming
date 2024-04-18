#include "function_pointers.h"


/**
* array_iterator - prints an integer
* @array: the integer to print
*@size: size
*@action: sdf
* Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
if (array == NULL || action == NULL)
return;
while (i < (int) size)
{
action(array[i]);
i++;
}
}
