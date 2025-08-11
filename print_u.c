#include "main.h"
/**
  * prnt - function that prints unsigned value
  * @n: usigned int n
  * @base: unsigned int
  * @uppercase: int value
  * @buf: pointer 
  * @pos: pointer to int
  */
void prnt(unsigned long n, unsigned int base, int uppercase, char *buf, int *pos)
{
	const char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (n / base)
		prnt(n / base, base, uppercase, buf, pos);
	buf[(*pos)++] = digits[n % base];
}

/**
 * print_u - prints an unsigned integer as unsigned decimal
 * @arg_list: points to the unsigned int
 * @buffer: buffer to store the result
 * @pos: pointer to int
 * Return: number of characters in @buffer
 */
int print_u(va_list arg_list, char *buffer, int *pos)
{
	unsigned int num = va_arg(arg_list, unsigned int);
	prnt(num, 10, 0, buffer, pos);
	return 0;
}
