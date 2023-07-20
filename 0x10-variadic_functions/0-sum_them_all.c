#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - It returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)

{
		va_list prgm;
		unsigned int r, addition = 0;

		va_start(prgm, n);

		for (r = 0; r < n; r++)
			addition += va_arg(prgm, int);

		va_end(prgm);

		return (addition);
}
