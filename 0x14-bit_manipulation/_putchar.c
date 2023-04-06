#include <unistd.h>

/**
 * _putchar - writes a character to the standard output stream
 * @c: character to be written
 *
 * Return: On success, returns the character written as an unsigned char.
 *         On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

