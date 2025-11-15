#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Types:
 *  c: char
 *  i: integer
 *  f: float
 *  s: char * (if NULL, print (nil))
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;
	char *sep = "";
	int n;
	double d;
	char c;

	va_start(ap, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(ap, int);
				printf("%s%c", sep, c);
				sep = ", ";
				break;
			case 'i':
				n = va_arg(ap, int);
				printf("%s%d", sep, n);
				sep = ", ";
				break;
			case 'f':
				d = va_arg(ap, double);
				printf("%s%f", sep, d);
				sep = ", ";
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				sep = ", ";
				break;
			default:
				break;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
