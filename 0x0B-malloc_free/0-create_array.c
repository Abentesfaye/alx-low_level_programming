#include "main.h"
#include <stdlib.h>
/**
 * create_array - function return pointer to allocated memory
 * @size : parametr for the size of memory to be allocat
 * @c : a character that going to be assigned to the memory i
 * Return: char pointer to dest
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL)
	char array = (char *) malloc(size);

	if (array == NULL)
		return (NULL);
	int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
