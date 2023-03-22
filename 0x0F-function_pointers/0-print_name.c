#include "function_pointers.h"
/**
 * print_name- prints a name
 * @name: name to  be prit
 * @f: function to be called
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name) && !(f))
		f(name);
}
