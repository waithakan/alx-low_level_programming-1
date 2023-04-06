#include "lists.h"
/**
 * find_listint_loop - finds loops in a
 * linked list
 * @head: linked list to be searched for
 *
 * Return: address of the node where the  loop start
 * or NULL if loop absent
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
		}
		return (NULL);
	}
}
