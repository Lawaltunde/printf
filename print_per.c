#include "main.h"

/**
  * printPer - function that checks percentage as format specifier
  * @args: object arg.
  * @buf: pointer to char
  * Return: int value, length
  */

int printPer(va_list __attribute__((__unused__))args, char *buf)
{
	*buf = '%';

	return (1);
}
