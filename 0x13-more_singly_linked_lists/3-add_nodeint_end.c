#include "lists.h"
/**
 * add_nodeint_end - add new node to th end of the list
 * @head: head of the list
 * @n: data
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	if (!head)
	{
		return (NULL);
	}

	last_node = *head;

	while (last_node && last_node->next)
		last_node = last_node->next;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (last_node == NULL)
		*head = new_node;
	else
		last_node->next = new_node;

	return (new_node);


}

