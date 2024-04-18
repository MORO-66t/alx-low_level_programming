#include "lists.h"

/**
 * delete_nodeint_at_index - add at beginning
 * @head: frist node
 * @index: index
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *tmp1;
unsigned int i = 0;
if (!head || !*head)
return (-1);

if (!index)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}
tmp = *head;
while (tmp)
{
if (i == index)
{
tmp1->next = tmp->next;
free(tmp);
return (1);
}
i++;
tmp1 = tmp;
tmp = tmp->next;
}
return (-1);
}
