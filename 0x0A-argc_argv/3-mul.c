#include <stdio.h>
#include <stdlib.h>
/**
 * main -> starting point of the program
 * @argc : number of the argumets
 * @argv : argumet vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int x, y;
	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc < 3 || argc > 3)
	{
	printf("error\n");
	}
	printf("%i\n", x * y);
	return (0);
}

