#include "main.h"

/**
 * print_X - prints an unsigned int in hex using uppercase
 * @arg_list: points to the unsigned int
 * @buffer: buffer that stores the hex result
 * @pos: pointer to int
 * Return: number of digits in @buffer
 */
int print_X(va_list arg_list, char *buffer, int *pos)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	prnt(num, 16, 1, buffer, pos);
	return 0;
}
