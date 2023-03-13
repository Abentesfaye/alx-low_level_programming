#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup -> copies a string
 * @str : string that going to be copy
 * Return: a string pointer and NULL if null
 */
char *_strdup(char *str)
{
	char *new_str;
	int i = 1, j = 0;

	if (str == NULL)
		return (NULL)

	while (str[i] != '\0')
		i++;
	new_str = (char *)malloc(i * sizeof(char) + 1);
	if (new_str == NULL)
		return (NULL);
	while (j < i)
	{
		new_str[j] = str[j];
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}
