#include "main.h"

/**
 * print_r - prints a string in reverse
 * @arg_list: points to the string to be printed in reverse
 * @buffer: buffer stroing the string
 * @pos: pointer to int
 * Return: number of chracted in @buffer
 */
int print_r(va_list arg_list, char *buffer, int *pos)
{
	char *str = va_arg(arg_list, char *);
	int i, len = 0;

	if (!str)
		str = "(null)";

	while (str[len])
		len++;

	for (i = len - 1; i >= 0; i--)
		buffer[(*pos)++] = str[i];

	return 0;
}
