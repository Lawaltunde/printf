#include "main.h"

/**
 * print_x - print unsigned int in hex with lowercase letters
 * @arg_list: points to the int
 * @buffer: buffer to store the result
 * @pos: pointer to int
 * Return: number of digits in @buffer
 */
int print_x(va_list arg_list, char *buffer, int *pos)
{
	 unsigned int num = va_arg(arg_list, unsigned int);
	 prnt(num, 16, 0, buffer, pos);
	 return 0;
}
