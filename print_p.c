#include "main.h"

static int print_hex(unsigned long num, char *buffer, int *pos, int uppercase)
{
    char hex_digits_lower[] = "0123456789abcdef";
    char hex_digits_upper[] = "0123456789ABCDEF";
    char temp[16];
    int i = 0, j, count = 0;
    char *hex_digits = uppercase ? hex_digits_upper : hex_digits_lower;

    if (num == 0)
    {
        buffer[(*pos)++] = '0';
        return 1;
    }

    while (num > 0)
    {
        temp[i++] = hex_digits[num % 16];
        num /= 16;
    }

    for (j = i - 1; j >= 0; j--)
    {
        buffer[(*pos)++] = temp[j];
        count++;
    }

    return count;
}

/**
  * print_p - function that handles %p
  * @args: object args
  * @buf: budder, pointer to char
  * @pos: pointer to int
  * Return: int type
  */

int print_p(va_list arg_list, char *buffer, int *pos)
{
	void *ptr = va_arg(arg_list, void *);
	unsigned long addr = (unsigned long)ptr;
	char *null_str;
	int start = *pos, i;

	if (!ptr)
	{
		null_str = "(nil)";
		for (i = 0; null_str[i]; i++)
			buffer[(*pos)++] = null_str[i];
		return (*pos - start);
	}

	buffer[(*pos)++] = '0';
	buffer[(*pos)++] = 'x';

	print_hex(addr, buffer, pos, 0);
	return (*pos - start);
}

