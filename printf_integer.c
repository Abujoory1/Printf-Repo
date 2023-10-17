#include "main.h"

/**
 * printf_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int printf_integer(va_list list)
{
	int num_length;

	num_length = printf_number(list);
	return (num_length);
}
