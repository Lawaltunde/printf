#include "main.h"

/**
  * printChar - function that checks char specifier
  * @args: object args
  * @buf: pointer to char
  * Return: int value 1
  */
int printChar(va_list arg_list, char *buffer, int *pos)
{
	unsigned char val;

	val = (char)va_arg(arg_list, int);
	buffer[(*pos)++] = val;
	return (1);
}
