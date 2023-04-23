#include "main.h"
#include <stdio.h>

/**
 * _printf - function that produces output according
 * to a format.
 * @format: a character string.
 * Return: zero or number of string leteral passed
 * into the function excluding special characters.
 */

int _printf(const char *format, ...)
{
	unsigned int w = 0, rtrn = 0;

	va_list(argname);

	va_start(argname, format);
	while (format[w] != '\0')
	{
		if (format[w] != '%')
			puchr(format[w]);
		else
			if (format[w + 1] == '%')
			{
				puchr('%');
				w++;
				rtrn -= 1;
			}

		else
			if (format[w + 1] == 'c')
			{
				puchr(va_arg(argname, int));
				w++;
			}
		else
			if (format[w + 1] == 's')
			{
				rtrn = _putstrn(va_arg(argname, char *));
				w++;
				rtrn -= 1;
			}
		rtrn += 1;
		w++;
	}
	va_end(argname);
	return (rtrn);
}
