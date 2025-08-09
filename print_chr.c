#include "main.h"

/**
  * printChar - function that checks char specifier
  * @args: object args
  * @buf: pointer to char
  * Return: int value 1
  */
int printChar(va_list args, char *buf)
{
	unsigned char val;

	val = va_arg(args, int);
	if (val == '\0')
	{
		return (1);
	}

	*buf = val;
	return (1);
}
