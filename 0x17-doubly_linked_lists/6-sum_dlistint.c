#include "lists.h"

/**
 * sum_dlistint - Function which return the sum of dlistin.
 * @head: The head.
 *
 * Return: Exit success.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
