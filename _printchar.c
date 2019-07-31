#include "holberton.h"

/**
 * _printchar - prints character
 * @arguments: character to print
 * Return: 0
 */

int _printchar(va_list arguments)
{
	char ch;
	int counter = 0;

	ch = va_arg(arguments, int);
	if (ch != 0)
	{
		counter += _putchar(ch);
	}
	else
	{
		return (0);
	}
	return (counter);
}
