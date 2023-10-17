#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct operator_func - defines a struct for symbols and functions.
 *
 * @op: The operator.
 * @fun: The function associated
 */

struct operator_func
{
	char *op;
	int (*fun)(va_list);
};
typedef struct operator_func op_fun_t;

int _printf(const char *format, ...);
int printf_helper(const char *format, op_fun_t f_list[], va_list args);
char *convert(unsigned long int num, int base, int lowercase);
int isNonAlphaNumeric(char c);
int _puts(char *str);
int printf_string(va_list val);
int printf_char(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int _putchar(char c);
int print_percentage(va_list);
#endif
