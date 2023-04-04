#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint - print list off the node
 *@h:the value to be print
 *Retur0n:length of the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
