#inlcude "lists.h"
/**
 * insert_node_at_index - inserts new node at possition
 * @head: pointer to had of the node
 * @idx: index 
 * @n:data
 * Return: new node or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}


	/*create new node*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL):
	}

	if (indx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	for (i = 0; i < idx -1 && current != NULL; i++)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
