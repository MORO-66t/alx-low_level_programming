#include "lists.h"
#include <string.h>

/**
 * add_node - add at beginning
 * @head: frist node
 * @str: str
 * Return: struct
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current;
	unsigned int len = 0;

	while (str[len])
		len++;

	if (!head || !str)
		return (NULL);
	current = malloc(sizeof(list_t));
	if (!current)
		return (NULL);

	current->str = strdup(str);
	current->len = len;
	current->next = (*head);
	(*head) = current;

	return (*head);


}
