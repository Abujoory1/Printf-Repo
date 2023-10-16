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

	    printf_helper(format, args);
	    
	    va_end(args);
	    return (count);
}
