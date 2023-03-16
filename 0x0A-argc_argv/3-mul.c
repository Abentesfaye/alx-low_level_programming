#include <stdio.h>
#include <stdlib.h>
/**
 * main -> starting point of the program
 * @argc : number of the argumets
 * @argv : argumet vector
 * Return: nothing
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;

	if (argc <= 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", x * y);
	return (0);
}
