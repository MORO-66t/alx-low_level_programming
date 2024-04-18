#include "lists.h"



/**
 * print_list - print lists
 * @h: refer to strust
 * Return: size of lists
 */

size_t print_list(const list_t *h)
{

	size_t s = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);


}
