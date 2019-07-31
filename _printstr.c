#include "holberton.h"

/**
 * _printstr - prints string
 * @arguments: string to print
 * Return: length of string
 */

int _printstr(va_list arguments)
{
	const char *str;
	int i;
	char *null_str = "(null)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; null_str[i] != '\0'; i++)
			_putchar(null_str[i]);
		return (i);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
