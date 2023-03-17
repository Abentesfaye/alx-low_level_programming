#include "main.h"


/**
 * string_nconcat - concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * @n: size of bytes.
 *
 * Return: pointer to the allocated memory 98 it if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lens1, lens2, lenptr, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;

	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	if (n > lens2)
		n = lens2;

	lenptr = lens1 + n;

	ptr = malloc(lenptr + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < lenptr; i++)
		if (i < lens1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - lens1];

	ptr[i] = '\0';

	return (ptr);
}
