#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string.
 * @s: Type char pointer
 * Return: Alaways 0.
 */
int _strlen(char *s)
{
	int length = 0;

	for (length = 0; s[length] != 0; length++)
	{
	}
	return (length);
}
/**
 * _strlenc - strlen function but applied for constant char pointer str
 * @str: char pointer.
 * Return: 0.
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (1);
}
