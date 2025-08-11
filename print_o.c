#include "main.h"

/**
 * print_o - prints an unsigned integer as in octal notation
 * @arg_list: points to the unsigned int
 * @buffer: stores the result
 * @pos: pointer to int
 * Return: number of digits in @buffer
 */
int print_o(va_list arg_list, char *buffer, int *pos)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	prnt(num, 8, 0, buffer, pos);
	return 0;
}
