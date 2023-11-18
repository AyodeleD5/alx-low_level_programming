#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: consant number of element
 * Return: sum of the elements in n
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int r;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (r = 0; r < n; r++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
return (sum);
}
