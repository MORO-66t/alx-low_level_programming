#include "lists.h"

/**
* free_listint2 - free
* @head: h
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp, *node;
if (!head)
return;
node = *head;
while (node)
{
temp = node;
node = node->next;
free(temp);
}
*head = NULL;
}
