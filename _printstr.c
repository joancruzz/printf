#include "holberton.h"
#include <stdio.h>

/**
 * _printstr - prints string
 *
 * @arguments: string to print
 *
 * Return: length of string
m*/

int _printstr(va_list arguments)
{
	const char *str;
	int i;

	str = va_args(arguments, char*);
	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
