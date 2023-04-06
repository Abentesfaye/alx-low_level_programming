#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to convert and prints
 *
 * Return: nothing
 */
void Print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}
