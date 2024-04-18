#include "lists.h"

/**
 * list_len - to list len
 * @h: again
 * Return: size
 */
size_t list_len(const list_t *h)
{

size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
