#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -> allocate memorydynamicaly
 * @b : size of memory to be allocated
 * Return : addres of the new memory location
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
