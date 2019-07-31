#include "holberton.h"
/**
 * _printf - prints all datatypes
 * @format: data type to be printed
 * Return: length of input
 */
int _printf(const char * const format, ...)
{
	int index = 0, y = 0, counter = 0;
	va_list arguments;

	data_t type[] = {
		{"c", _printchar},
		{"i", _printnum},
		{"d", _printnum},
		{"s", _printstr},
		{"%", _printp},
		{NULL, NULL}
	};
	va_start(arguments, format);

	if ((format == NULL))
		return (-1);
	for (index = 0; format[index] != '\0'; index++)
	{
		if ((format[index] == '%' && format[index - 1] == '%' && format[index + 1] == '\0'))
			return (-1);
		if (format[index] != '%')
		{
			counter = counter + _putchar(format[index]);
			continue;
		}
		for (y = 0; type[y].result != NULL; y++)
		{
			if (*type[y].result == format[index + 1])
			{
				counter = counter + type[y].f(arguments);
				break;
			}
		}
		index++;
		if (type[y].result == NULL)
		{
			counter = counter + _putchar('%');
			counter = counter + _putchar(format[index]);
		}
	}
	va_end(arguments);
	return (counter);
}
