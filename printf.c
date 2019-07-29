#include "holberton.h"
#include <stdio.h>
/**
 * printf - prints all datatypes
 * @format: data type to be printed
 * Return: length of input
 */
int _printf(const char * const format, ...)
{

	int x;
	int y;
	va_list arguments;
	int counter = 0;

	data_t type[] = {
		{"c", _printchar},
	/*	{"i", _printint}, */
	/*	{"d", _printdig}, */
		{"s", _printstr},
		{"%", _printp},
		{NULL, NULL}
	};

	va_start(arguments, format);

	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (-1);

	for (x = 0; format != NULL && format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			counter = counter + _putchar(format[x]);
			continue;
		}
		for (y = 0; type[y].result != NULL; y++)
		{
			if (*type[y].result == format[x + 1])
			{
				counter = counter + type[y].f(arguments);
				break;

			}
		}
		x++;
		if (type[y].result == NULL)
		{
			counter = counter + _putchar('%');
			counter = counter + _putchar(format[x]);
		}
	}
	va_end(arguments);
	return (counter);
}
