#include "lists.h"
/**
 * listint_len - return the num of elements in a linked lists
 * @h: linked list of typed listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
