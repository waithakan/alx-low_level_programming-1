#include "lists.h"

/**
 * free_listint - it frees  linked list
 * @head: points to the freed list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
