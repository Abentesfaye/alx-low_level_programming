#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 *_strdup -  copy the variable and allocat new memory
 * @str : string that going to be copy
 * Return : pointer to the new stirng
 */
char *_strdup(char *str)
{
	char *newstr;
	int i;
	int lenght = 0;

	while (str[length] != '\0')
		lenght++;

	if (str == NULL)
		return (NULL);

	newstr = malloc(sizeof(str));

	for (i = 0; i < length; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
