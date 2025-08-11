#include "main.h"

/**
 * print_b - converts unsigned integer to binary
 * @arg_list: points to the integer to be converted
 * @buffer: buffer to store the binary result in
 * @pos: pointer to int
 * Return: number of digits stored
 */
int print_b(va_list arg_list, char *buffer, int *pos)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int bits[32];
	int count = 0, i = 0;

	if (num == 0)
	{
		buffer[(*pos)++] = '0';
		return 1;
	}

	while (num > 0)
	{
		bits[count++] = (num % 2) + '0';
		num /= 2;
	}

	while (i > 0)
	{
		buffer[(*pos)++] = bits[--i];
		count++;
	}

	return count;
}
