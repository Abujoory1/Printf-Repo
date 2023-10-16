#include "main.h"

/**
 * _printf_helper_func - Is a helper for printf_helper.
 * @format: a pointer argument.
 * @args: argument list with varidic.
 * Return: count of character.
 */

void _printf_helper_func(const char *format, va_list args)
{
	int count = 0;

	if (*format == 'c')
	{
		count += printf_char(args);
		format++;
	}
	else if (*format == 's')
	{
		count += printf_string(args);
		format++;
	}
	else if (*format == '%')
	{
		_putchar('%');
		count++;
		format++;
	}
	else
	{
		_putchar('%');
		_putchar(*format);
		count += 2;
		format++;
	}
}
