#include "main.h"

/**
  * swap_int - swaps the value of integers
  *
  * @a: 1st integer to swap
  * @b: 2nd integer to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
