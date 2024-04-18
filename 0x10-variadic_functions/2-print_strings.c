#include "variadic_functions.h"
#include <stdio.h>

/**
* print_strings - prints strings with separator
* @separator: the separator between strings
* @n: number of strings to print
* @...: variable number of strings
* Return: Always void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
int i = n;
va_list args;
char *str;
if (!n)
{
printf("\n");
return;
}
va_start(args, n);
while (i--)
printf("%s%s", (str = va_arg(args, char *)) ? str : "(nil)",
i ? (separator ? separator : "") : "\n");
va_end(args);
}
