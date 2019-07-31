#include "holberton.h"

/**
 * _printchar - prints character
 * @arguments: character to print
 * Return: 0
 */

int _printchar(va_list arguments)
{
	_putchar(va_arg(arguments, int));
		return (1);
}
