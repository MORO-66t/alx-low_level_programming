#include "main.h"
/**
*print_alphabet_x10 - print the alphabet a - z
**/
void print_alphabet_x10(void)
{
int c;
int ch;
for (c = 0; c < 10; c++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
