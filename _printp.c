#include "holberton.h"
#include <stdio.h>

int _printp(va_list arguments)
{
	char *percent;
	int per = '%';

	percent = va_arg(arguments, char*);
	if (percent != NULL)
	{
		_putchar(per);
	}
	return (0);
}
