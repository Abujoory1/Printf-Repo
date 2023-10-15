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
	    va_start(args, format);

	    while (*format != '\0')
	    {
		    if (*format == '%')
		    {
			    switch (*++format)
			    {
				    case 'c':
					    count += _putchar((char) va_arg(args, int));
					    break;
				    case 's':
					    {
						    char *str = va_arg(args, char *);
						    while (*str)
						    {
							    count += _putchar(*str++);
						    }
					    }
					    break;
				    case '%':
					    count += _putchar('%');
					    break;
				    default:
					    break;
			    }
		    } else 
		    {
			    count += _putchar(*format);
		    }
		    format++;
	    }
	    va_end(args);
	    return (count);
}
