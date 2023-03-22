#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name- prints a name
 * @name: name to  be print
 * @f: function to be called
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		return;
	}
}
