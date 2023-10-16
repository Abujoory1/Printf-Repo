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
			    format++;
		    }
		   else
		   {
			   format++;
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
				   printf_percentage();
				   count++;
				   format++;
			   }
			   else
			   {
				   printf_percentage();
				   _putchar(*format);
				   count += 2;
				   format++;
			   }
		   }
	    }
}
