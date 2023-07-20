#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - It prints anything
 * @format: The list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)

{
		int r = 0;
		char *string, *separator = "";

		va_list list;

		va_start(list, format);

		if (format)
		{
			while (format[r])
			{
			switch (format[r])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;

				default:
					r++;
					continue;
			}
			separator = ", ";
			r++;
		}
	}
	printf("\n");
	va_end(list);
}
