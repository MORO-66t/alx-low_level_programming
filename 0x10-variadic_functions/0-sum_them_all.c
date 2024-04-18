#include "variadic_functions.h"

/**
* sum_them_all - check the code
* @n: num of var
* Return: Always 0.
*/

int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;
va_list counterptr;
if (n == 0)
return (0);
va_start(counterptr, n);
for (i = 0; i < (int) n; i++)
{
sum += va_arg(counterptr, int);
}
va_end(counterptr);
return (sum);
}
