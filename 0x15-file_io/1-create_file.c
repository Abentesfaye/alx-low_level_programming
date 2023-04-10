#include "main.h"
/**
 * create_file - create a file
 * @filename: A pointer a a file name
 * @text_content: a pointer to a string
 * Return: -1 if function fail else 1
 */
int create_file(const char *filename, char *text_content)
{
	int x , y , l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for ( l = 0; text_content[l];)
			l++;
	}

	x = open(filenamer, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, l);

	if (x == -1 || w == -1)
		return (-1);

	close(x);

	return (1);
}
