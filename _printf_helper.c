#include "main.h"

/**
 * printf_helper - Printf Helper is help function for printf.
 * @format: argument pointer.
 * @args: argument list with varidict.
 * Return: 0
 */

void printf_helper(const char *format, va_list args)
{
	int count = 0;

	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			_printf_helper_func(format, args);
		}
		format++;
	}
}
