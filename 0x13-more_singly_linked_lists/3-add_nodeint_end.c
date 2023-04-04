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
	new_node = malloc(sizeof(listint_t));

	last_node = *head;

	if (new_node == NULL)
		return (NULL);
	
	new_node->n = n;
	new_node->next = NULL;
	if (head == NULL)
		head = new_node;
		return;
	while (head != NULL)
	{
		last_node = last_node->next;
	}

	last_node = new_node;
	return (new_node);
}

