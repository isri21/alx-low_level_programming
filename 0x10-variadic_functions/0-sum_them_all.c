#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds integers
 * @n: number of integers to add
 *
 * Return: returns the sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(list, int);
	}
	va_end(list);

	return (add);
}

