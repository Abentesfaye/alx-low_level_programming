#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of argument passed
 * @argv: array of arguments
 *
 * Return: returns nothing
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", x * y);
	}
	else{
		printf("%s\n", "Error");
	}

	return (0);
}