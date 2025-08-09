#include "main.h"

/**
  * specifierChecks - pointer to a function that checks for a
  * match between the input and the format specifier
  * @s: pointer to char
  * Return: pointer to function and an int value
  */


int (*specifierChecks(const char *s))(va_list args, char *buf)
{
	format_sp fmptr[] = {
		{"c", printChar},
		{"s", printStr},
		{"%", printPer},
		{NULL, NULL}
	};
	int i = 0;

	if (!s)
	{
		write(2, "Not a valid format specifier", 28);
		exit(1);
		return (NULL);
	}
	while (fmptr[i].chr != NULL)
	{
		if (s == fmptr[i].chr)
		{
			return (fmptr[i].fptr);
		}
		i++;
	}
	return (NULL);
}
