#include "main.h"
/**
 * get_bit - returns the value of a bit  at a given index
 * @n: unsigned long int to check
 * @index: index of thr bit to get
 * Return: value of the bit at index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
