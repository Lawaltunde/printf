#include "main.h"

/**
  * printStr - function that checks strings format spec.
  * @args: object args
  * @buf: pointer to char
  * Return: length of the string
  */

int printStr(va_list args, char *buf)
{
	int len = 0;
	char *holder, *output = "(null)";

	holder = va_arg(args, char *);
	if (holder == NULL)
	{
		holder = output;
	}

	while (holder)
	{
		*buf = *holder;
		buf++;
		holder++;
		len++;
	}

	return (len);
}
