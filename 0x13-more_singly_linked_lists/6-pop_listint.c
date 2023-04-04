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

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	tmp2 = tmp->next;
	n = tmp->n;
	free(tmp);
	*head = tmp2;
	return (n);
}
