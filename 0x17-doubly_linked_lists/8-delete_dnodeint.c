#include "lists.h"

/**
 * delete_dnodeint_at_index - Funtction to delete node.
 * @head: A pointer header.
 * @index: The index of node which will be delete.
 *
 * Return: Always return success.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
if (*head == NULL)
return (-1);
for (; index != 0; index--)
{
if (tmp == NULL)
return (-1);
tmp = tmp->next;
}
if (tmp == *head)
{
*head = tmp->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
tmp->prev->next = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = tmp->prev;
}
free(tmp);
return (1);
}
