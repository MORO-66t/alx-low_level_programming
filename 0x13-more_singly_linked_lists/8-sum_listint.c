#include "lists.h"

/**
* sum_listint - free
* @head: h
* Return: void
*/
int sum_listint(listint_t *head)
{
listint_t *tmp;
unsigned int n = 0;
if (!head)
return (0);
tmp = head;
while (tmp)
{
n += tmp->n;
tmp = tmp->next;
}
return (n);
}
