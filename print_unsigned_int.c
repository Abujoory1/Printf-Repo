#include "main.h"

/**
 * printf_unsigned_int - print an unsigned int.
 * @l: l is a list of parameters.
 * Return: length of numbers.
 */

int printf_unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (printf_unsgined_num(num));

	if (num < 1)
		return (-1);
	return (printf_unsgined_num(num));
}

/**
 * printf_unsgined_num - print an unsigned number
 * @n: unsigned integer to be printed
 * Return: length of n.
 */

int printf_unsgined_num(unsigned int n)
{}
