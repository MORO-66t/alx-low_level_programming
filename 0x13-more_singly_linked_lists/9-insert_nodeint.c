#include "lists.h"

/**
 * insert_nodeint_at_index - add at beginning
 * @head: frist node
 * @n: n
 * @idx: index
 * Return: struct
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current = malloc(sizeof(listint_t)), *tmp;
unsigned int i = 0;
if (!head || !current)
return (NULL);

current->n = n;
current->next = NULL;

if (!idx)
{
current->next = *head;
*head = current;
return (*head);
}
tmp = *head;
while (tmp)
{
if (i == idx - 1)
{
current->next = tmp->next;
tmp->next = current;
return (current);
}
i++;
tmp = tmp->next;
}
free(current);
return (NULL);
}
