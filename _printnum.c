#include "holberton.h"

/**
 * _printnum - function that prints numbers
 * @arguments: data type held in va_list to print
 * Return: counter
 */

int _printnum(va_list arguments)
{
	int rem, i;
	int number_started = 0;
	int n  = va_arg(arguments, int);
	int counter = 0;
	unsigned int m;

	if (n < 0)
	{
		counter += _putchar('-');
		m = -n;
	}
	else if (n == 0)
	{
		counter += _putchar('0');
		return (counter);
	}
	else
		m = n;
	if (m > 0)
	{
		rem = m % 10;
		if (m / 10 > 0)
		{
			for (i = 1000000000; i >= 10; i = i / 10)
			{
				if (m / i > 0)
					number_started = 1;
				if (number_started == 1)
				{
					counter += _putchar((m / i % 10) + '0');
					m = m % i;
				}
			}
		}
		counter += _putchar(rem + '0');
	}
	return (counter);
}
