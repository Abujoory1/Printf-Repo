#include "main.h"

/**
 * printf_helper - Receives the function and foramter from printf.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents.
 * Return: A total length of character.
 */

int printf_helper(const char *format, op_fun_t f_list[], va_list arg_list)
{
	int i, j, r_val, count;

	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].op != NULL; j++)
			{
				if (format[i + 1] == f_list[j].op[0])
				{
					r_val = f_list[j].fun(arg_list);
					if (r_val == -1)
						return (-1);
					count += r_val;
					break;
				}
			}
			if (f_list[j].op == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
