#include "lists.h"

/**
 * print_dlistint - function that print all element of dlistint list
 * @h: The head of the dlistint_t list.
 *
 * Return: always integer
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
