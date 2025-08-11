#include "main.h"

/**
  * _printf - replicate function of printf, it print all
  * @format: pointer to char
  * Return: length of the argument passed or zero if none
  */

int _printf(const char *format, ...)
{
	int i, length = 0, pos = 0;
	int (*fptr)(va_list, char *, int *);
	char *buffer;
	va_list args;

	if (!format)
		return (-1);

	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				free(buffer);
				va_end(args);
				return (-1);
			}

			fptr = specifierChecks(format[i + 1]);
			if (fptr)
			{
				i++;
				fptr(args, buffer, &pos);
				continue;
			}
			else
			{
				buffer[pos++] = '%';
				buffer[pos++] = format[i + 1];
				i++;
				continue;
			}
		}
		buffer[pos++] = format[i];
	}
	va_end(args);
	write(1, buffer, pos);
	length = pos;
	free(buffer);
	return (length);
}
