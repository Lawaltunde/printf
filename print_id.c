#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to printed
 * @buffer: buffer to store the character printed
 * Return: void
 */

void print_num(int n, char *buffer)
{
	int val = n;

	if (val / 10)
		print_num((val / 10), buffer - 1);

	*buffer++ = (val % 10) + '0';
}

/**
  * print_d_i - function that handles i and d
  * @arg_list: object args
  * @buffer: pointer to char
  ^ Return: integer value
  */

int print_d_i(va_list arg_list, char *buffer)
{
	int d, copy_d, digits = 1;

	d = va_arg(arg_list, int);

	if (d < 0)
	{
		*buffer = '-';
		digits++;

		if (d == -2147483648)
		{
			*(buffer + 1) = '2';
			digits++;
			d = 147483648;
		}
		else
			d = -d;
	}

	copy_d = d;

	while ((copy_d / 10) > 0)
	{
		digits++;
		copy_d /= 10;
	}

	buffer += digits - 1;
	print_num(d, buffer);
	return (digits);
}
