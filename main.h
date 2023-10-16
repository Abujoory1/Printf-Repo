#include <stdarg.h>
#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
void printf_helper(const char *format, va_list args);
void _printf_helper_func(const char *format, va_list args);
int printf_string(va_list val);
int printf_char(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int _putchar(char c);
int printf_percentage(void);
#endif
