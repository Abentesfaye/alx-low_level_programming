#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the had of the list
 * @index: index of the node
 * Return:pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
