#include "holberton.h"
#include <stdio.h>

/**
 * _printchar - prints character
 * @arguments: character to print
 * Return: 0
 */

int _printchar(va_list arguments)
{
	char ch;

	ch = va_arg(arguments, int);
	if (ch != 0)
	{
		_putchar(ch);
	}
	else
	{
		return (0);
	}
	return (0);
}
