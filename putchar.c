#include <unistd.h>

/**
 * puchr - function that print character
 * @c: input argument of char data type.
 * Return: value
 *
 */

int puchr(char c)
{
	return (write(1, &c, 1));
}
