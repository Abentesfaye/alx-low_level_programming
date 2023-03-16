#include <stdio.h>
/**
 * main -> starting point of the program
 * @argc : argumet counter for the command line
 * @argv : argumet vector of the commad line
 * Return: nothing
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int counter;

	counter = argc - 1;

	printf("%i\n", counter);
	return (0);
}
