#include "lists.h"
/**
 * sum_listint - calculates the sum of all data in the
 * linked list
 * @head: first node in the linked list
 *
 * Return: returns the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;


	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
