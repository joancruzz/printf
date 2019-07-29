#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <unistd.h>
#include <stdarg.h>

/**
  * struct datatypes - struct that groups all datatypes
  * @f: function pointer
  * @result: struct pointer to argument
  */

typedef struct datatypes
{
	char *result;
	int (*f)(va_list arguments);
} data_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _printchar(va_list arguments);
int _printstr(va_list arguments);
int main(void);
int _printnum(va_list arguments);
int _printp(va_list arguments);

#endif
