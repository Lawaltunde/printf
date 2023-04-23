#include "main.h"

/**
 * _putstrn - print out string
 * @letter: input string.
 * Return: val when string is passed in.
 */

int _putstrn(char *letter)
{
	unsigned int i, val = 0;

	if (letter)
	{
		for (i = 0; letter[i] != '\0'; i++)
		{
			puchr(letter[i]);
			val += 1;
		}
	}
	return (val);
}
