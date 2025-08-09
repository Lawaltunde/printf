#include "main.h"
/**
  * _printf - replicate function of printf, it print all
  * @format: pointer to char
  * Return: length of the argument passed or zero if none
  */
int _printf(const char *format, ...)
{
	int i, length = 0, holder = 0, (*fptr)(va_list, char *);
	char *buffer, *bufferPointer;
	va_list args;

	if (!format)
		return (-1);

	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);

	bufferPointer = buffer;
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				length = -1;
				break;
			}
			fptr = specifierChecks(format + i + 1);
			if (fptr)
			{
				i++;
				holder = fptr(args, buffer);
				buffer += holder;
				length += holder;
				continue;
			}
		}
		*buffer++ = format[i];
		length++;
	}
	va_end(args);
	if (length > 0)
		write(1, bufferPointer, length);
	free(bufferPointer);
	return (length);
}
