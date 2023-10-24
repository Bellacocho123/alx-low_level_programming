#include "lists.h"

/**
 * delete_nodeint_at_index - to deletes the node at index of a linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int node = 0;
	listint_t *current = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (node < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		node++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
