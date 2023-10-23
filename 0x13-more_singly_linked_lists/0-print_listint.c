#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: A pointer to the head of the linked list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
