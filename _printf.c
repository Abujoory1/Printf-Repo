#include "main.h"

/**
 * _printf - Write a function that produces output according to a format.
 * @format: is a character string.
 *
 * Return: the number  character.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	op_fun_t function_format_list[] = {
		{"%", print_percentage},
		{"c", printf_char},
		{"s", printf_string},
		{NULL, NULL},
	};
	va_list args_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args_list, format);

	count = printf_helper(format, function_format_list, args_list);

	va_end(args_list);
	return (count);
}
