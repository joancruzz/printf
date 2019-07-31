#include "holberton.h"

/**
 * _printp - prints percent sign
 * @arguments: input
 * Return: 1
 */

int _printp(va_list arguments)
{
	char *percent;
	int per = '%';

	percent = va_arg(arguments, char*);
	if (percent != NULL)
	{
		_putchar(per);
	}
	return (1);
}
