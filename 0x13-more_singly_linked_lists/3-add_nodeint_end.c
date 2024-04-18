#include "lists.h"
/**
* add_nodeint_end - adds a node to the bottom
* @head: pointer to first node
* @n: value for new node
* Return: pointer to new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *_node = malloc(sizeof(listint_t));
listint_t *tmp;

if (!head | !_node)
return (NULL);

_node->next = NULL;
_node->n = n;
if (!*head)
*head = _node;
else
{
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = _node;
}
return (_node);
}
