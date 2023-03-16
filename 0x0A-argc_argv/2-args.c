#include <stdio.h>
/**
 * main -> starting point of the program
 * @argc : commad line argumet counter
 * @argv : commmand line argumet vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
