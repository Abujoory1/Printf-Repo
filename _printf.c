#include "main.h"
/**
 * _prinft - Write a function that produces output according to a format.
 * @format: is a character string.
 *
 * Return: the number  character.
 */
int _printf(const char *format, ...)
{
	    int count = 0;
	    va_list args;

	    if (format == NULL)
	    {
		    return (-1);
	    }

	    va_start(args, format);

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
	    va_end(args);
	    return (count);
}
