#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
  * struct formatter - structure that contains two members;
  * function pointer and pointer to char
  * chr: char arg
  * @fptr: function to pointer
  */
typedef struct formatter
{
	char chr;
	int (*fptr)(va_list args, char *buffer);
} format_sp;

int _printf(const char *format, ...);
int printChar(va_list args, char *buf);
int printStr(va_list args, char *buf);
int printPer(va_list __attribute__((__unused__))args, char *buf);
int (*specifierChecks(const char s))(va_list args, char *buf);
int print_d_i(va_list arg_list, char *buffer);
void print_num(int n, char *buffer);
int print_b(va_list arg_list, char *buffer);
int print_r(va_list arg_list, char *buffer);
int print_r_13(va_list arg_list, char *buffer);
int print_x(va_list arg_list, char *buffer);
int print_X(va_list arg_list, char *buffer);
int print_u(va_list arg_list, char *buffer);
int print_o(va_list arg_list, char *buffer);
#endif
