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

int print_unsgined_number(unsigned int n)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
