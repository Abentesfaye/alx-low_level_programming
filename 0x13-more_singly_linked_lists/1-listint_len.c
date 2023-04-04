#include "lists.h"
/**
 * listint_len -  function to count legth of the list
 * @h:pointer to the list
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
