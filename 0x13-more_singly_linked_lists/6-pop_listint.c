#include "lists.h"
/**
 * pop_listint - pop head
 * @head: had of the list
 * Return: 0 if fail or data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;
	listint_t *tmp2;

	if (!head)
	{
		return (0);
	}
	tmp = *head;
	n = tmp->n;
	tmp2 = tmp->next;
	free(*head);
	*head = tmp2;
	return (n);
}
