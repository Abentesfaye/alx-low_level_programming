#include <stdio.h>
/**
 * main -> starting point of the program
 * @argc : argumet counter for the command line 
 * @argv : argumet vector of the commad line
 * Return: nothing
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	
	for (i = 0; i <= argc; i++)
	{
		printf("%i\n", i);
	}
	return (0);
}
