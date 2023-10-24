#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list args;  // Create a va_list to work with the arguments.
   	int sum = 0;

    	if (n == 0) {
        	return 0;  // If n is 0, return 0 as per the prototype.
	}

   	va_start(args, n);  // Initialize the va_list with the arguments.

    	// Loop through the parameters and accumulate the sum.
    	for (unsigned int i = 0; i < n; i++) {
        	sum += va_arg(args, int);
    	}

    	va_end(args);  // Clean up the va_list.

    	return sum;  // Return the calculated sum.
}
