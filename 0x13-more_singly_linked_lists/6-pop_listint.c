#include "lists.h"

/**
 * pop_listint - delets the first nide of the list
 * @head: points to the first element in the linked list
 * Return: returns the content deleted or nul for an empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
