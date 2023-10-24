#include "lists.h"
/**
 * pop_listint - to deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted else 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num_node;

	if (!head || !*head)
		return (0);

	num_node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num_node);
}
