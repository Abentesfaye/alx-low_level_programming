#include "lists.h"
/**
 * add_nodeint - add a node to a list
 * @head: head of the node
 * @n: data
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_t new_node;

	new_node = (struct listint_t *) malloc(sizeof(struct listint_t *));

	if (new_node == NULL)
		return;

	new_node->n = n;

	new_node->next = (*head);

	(*head) = new_node;

	return (new_node);
}
