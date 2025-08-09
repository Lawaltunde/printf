#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
  * struct formatter - structure that contains two members;
  * function pointer and pointer to char
  * @chr: pointer to char for fomat spec.
  * @fptr: function to pointer
  */
typedef struct formatter
{
	char *chr;
	int (*fptr)(va_list args, char *buffer);
} format_sp;

int _printf(const char *format, ...);
int printChar(va_list args, char *buf);
int printStr(va_list args, char *buf);
int printPer(va_list __attribute__((__unused__))args, char *buf);
int (*specifierChecks(const char *))(va_list, char *);
#endif
