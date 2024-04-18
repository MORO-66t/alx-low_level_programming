#include "lists.h"

/**
* get_nodeint_at_index - free
* @head: h
* @index: index
* Return: void
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp;
unsigned int i;
tmp = head;
for (i = 0; tmp && i < index; i++)
tmp = tmp->next;
return (tmp->element);
}
