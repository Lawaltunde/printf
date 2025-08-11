#include "main.h"

/**
  * specifierChecks - pointer to a function that checks for a
  * match between the input and the format specifier
  * @s: char
  * *pos: pointer to int
  * Return: pointer to function and an int value
  */


int (*specifierChecks(const char s))(va_list arg_list, char *buffer, int *pos)
{
	format_sp fmptr[] = {
		{'c', printChar},
		{'s', printStr},
		{'%', printPer},
		{'d', print_d_i},
		{'i', print_d_i},
		{'b', print_b},
		{'r', print_r},
		{'R', print_r_13},
		{'p', print_p},
		{'x', print_x},
		{'X', print_X},
		{'u', print_u},
		{'o', print_o},
		{'\0', NULL}
	};
	int i = 0;

	if (!s)
	{
		write(2, "Not a valid format specifier", 28);
		exit(1);
		return (NULL);
	}
	while (fmptr[i].chr != '\0')
	{
		if (s == fmptr[i].chr)
		{
			return (fmptr[i].fptr);
		}
		i++;
	}
	return (NULL);
}
