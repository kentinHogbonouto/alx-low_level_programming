#include "lists.h"

/**
 * get_dnodeint_at_index - Function.
 * @head: The dlistint_t header.
 * @index: Location of node.
 *
 * Return: Always exit success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
