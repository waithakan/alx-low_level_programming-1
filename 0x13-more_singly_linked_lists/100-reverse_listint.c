#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: points to the first node oin the list
 *
 * Return: return pointer to to first node
 * in the list
 */
list_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
