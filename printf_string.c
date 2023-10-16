#include "main.h"
#include <stddef.h>
/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the lenth of the string.
 */
int printf_string(va_list val)
{
        char *str;
        int i;
        int length;

        str = va_arg(val, char *);
        if (str == NULL)
        {
                str = "(NULL)";
                length = _strlen(str);
                for (i = 0; i < length; i++)
                {
                        _putchar(str[i]);
                }
                return (length);
        }
        else
        {
                length = _strlen(str);
                for (i = 0; i < length; i++)
                        _putchar(str[i]);
                return (length);
        }
}
