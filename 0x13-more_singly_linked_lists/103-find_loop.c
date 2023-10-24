#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_bella = head;
	listint_t *fast_eto = head;

	if (!head)
		return (NULL);

	while (slow_bella && fast_eto && fast_eto->next)
	{
		fast_eto = fast_eto->next->next;
		slow_bella = slow_bella->next;
		if (fast_eto == slow_bella)
		{
			slow_bella = head;
			while (slow_bella != fast_eto)
			{
				slow_bella = slow_bella->next;
				fast_eto = fast_eto->next;
			}
			return (fast_eto);
		}
	}

	return (NULL);
}
