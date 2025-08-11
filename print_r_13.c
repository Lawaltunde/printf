#include "main.h"

/**
 * print_r_13 - prints the rot13'ed string
 * @arg_list: points to the string to be printed
 * @buffer: buffer storing the rot13'ed string
 * @pos: pointer to int
 * Return: number of cahracters in @buffer
 */
int print_r_13(va_list arg_list, char *buffer, int *pos)
{
	char *alpha, *rot13_alpha, *ch;
	int i, j;

	alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	rot13_alpha = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	ch = va_arg(arg_list, char *);

	if (!ch)
		ch = "(null)";

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] == ' ')
		{
			buffer[(*pos)++] = ' ';
			continue;
		}
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (ch[i] == alpha[j])
			{
				buffer[(*pos)++] = rot13_alpha[j];
				break;
			}
		}
		if (alpha[j] == '\0')
			buffer[(*pos)++] = ch[i];
	}
	return (0);
}
