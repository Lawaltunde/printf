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
  * @pos: buffer tracker
  */
typedef struct formatter
{
	char chr;
	int (*fptr)(va_list arg_list, char *buffer, int *pos);
} format_sp;

int _printf(const char *format, ...);
int printChar(va_list arg_list, char *buffer, int *pos);
int printStr(va_list arg_list, char *buffer, int *pos);
int printPer(va_list __attribute__((__unused__))arg_list, char *buffer, int *pos);
int (*specifierChecks(const char s))(va_list arg_list, char *buffer, int *pos);
int print_d_i(va_list arg_list, char *buffer, int *pos);
void prnt(unsigned long n, unsigned int base, int uppercase, char *buffer, int *pos);
int print_b(va_list arg_list, char *buffer, int *pos);
int print_r(va_list arg_list, char *buffer, int *pos);
int print_r_13(va_list arg_list, char *buffer, int *pos);
int print_p(va_list arg_list, char *buffer, int *pos);
int print_p(va_list arg_list, char *buffer, int *pos);
int print_x(va_list arg_list, char *buffer, int *pos);
int print_X(va_list arg_list, char *buffer, int *pos);
int print_u(va_list arg_list, char *buffer, int *pos);
int print_o(va_list arg_list, char *buffer, int *pos);
#endif
