#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head: pointer to the head of the linkd list
 * Return: all the sum of the list data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
