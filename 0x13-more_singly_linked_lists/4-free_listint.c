#include "lists.h"
/**
 * free_listint - free the list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
