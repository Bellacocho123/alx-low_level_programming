#include "list.h"

/**
 * sum_listint - to returns the sum of all 
 * the data n linked list.
 * @h: 
 * Return: 0 f the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);

}
