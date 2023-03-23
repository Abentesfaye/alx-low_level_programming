#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print number that pass to it
 * @separator: separator for the elemts
 * @n:number of argument
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arg, int));

			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(arg);
	}
}
