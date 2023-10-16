#include "main.h"
/***
 * printf_char - printf_char a char as helper function.
 * @val: val is an argument.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char str;
	
	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
