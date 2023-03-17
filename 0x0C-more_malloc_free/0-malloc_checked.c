#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: the amount of size to e allocated
 *
 * Return: a pointer to the alloaced memeory or 98 if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (void *)malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
