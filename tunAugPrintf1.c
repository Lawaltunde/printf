#include "main.h"

/**
 * _printf - function that produces output according
 * to a format.
 * @format: a character string.
 * Return: zero or number of string leteral passed
 * into the function excluding special characters.
 */

int _printf(const char *format, ...)
{
	unsigned int w = 0, rtrn = 0, argcnt, len;
	va_list(argname);

	char *argptr;
	va_start(argname, format);
	while (format[w] != '\0')
	{
		if (format[w] != '%')
			puchr(format[w]);
		else
			if (format[w + 1] == '%')
				puchr('%');

		else
			if (format[w + 1] == 'c')
			{
				w++;
				va_arg(argname, int);

				puchr(va_arg(argname, int));
			}
		else
			if (format[w + 1] == 's')
			{
				w++;
				va_arg(argname, char *);
				len = strlen(va_arg(argname, char *));
				argptr = va_arg(argname, char *);
				for (argcnt = 0; argcnt < len; argcnt++)
				{
					puchr(argptr[argcnt]);
				}
			}

		rtrn += 1;
		w++;
	}
	va_end(argname);
	return (rtrn);
}

