#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat -> concatnate two strings
 * @s1 : first string
 * @s2 : second string
 * Return: pointer to the new string or null if null passed
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *str;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		len1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		len2 = strlen(s2);
	}

	str = malloc((len1 + len2) + 1);

	if (str == NULL)
		return (NULL);

	if (len1 > 0)
		strcpy(str, s1);

	if (len2 > 0)
		strcat(str, s2);

	return (str);
}
