#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/*
 * _strdup - copy string.
 * @str : string that going to be copy
 * Return : pointer to the new stirng
 */
char *_strdup(char *str)
{
	char *newstr;
	long unsigned int i;
	size_t length = strlen(str) + 1;

	if (str == NULL)
		return (NULL);

	newstr = malloc(length);
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
