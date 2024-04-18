#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list.
* @head: Pointer to a pointer to the head node.
*
* Return: A pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next = NULL;
if (!head || !*head)
return (NULL);
prev = *head;
*head = NULL;
while (prev)
{
next = prev->next;
prev->next = *head;
*head = prev;
prev = next;
}

return (*head);
}
