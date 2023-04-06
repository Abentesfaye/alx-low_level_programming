#include "main.h"
/**
 * flip_bits - returns the number of bit needed to flip to get from n to n
 * @n: first unsigned long integer
 * @m: second unsigned long integr
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int count;

	i = n ^ m;
	count = 0;

	while (i)
	{
		count++;
		i &= (i - 1);
	};

	return (count);
}
