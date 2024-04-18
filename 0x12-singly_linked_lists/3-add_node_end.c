#include "lists.h"
#include <string.h>

/**
 * add_node_end - obv
 * @head: h
 * @str: str
 * Return: ls
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp  = *head;
list_t *new;
unsigned int len = 0;
while (str[len])
	len++;
new = malloc(sizeof(list_t));
if (!new)
	return (NULL);

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;
return (new);
}
