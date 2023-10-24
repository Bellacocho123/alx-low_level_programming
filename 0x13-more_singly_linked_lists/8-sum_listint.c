#include "lists.h"

/**
 * sum_listint - to returns the sum of all
 * the data n linked list.
 * @head: first node in the linked list
 * Return: 0 f the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum_all_data = 0;

	while (temp)
	{
		sum_all_data += temp->n;
		temp = temp->next;
	}
	return (sum_all_data);

}
