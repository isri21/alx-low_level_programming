#include "main.h"

/**
* _pow_recursion - returns value of x raised to value of y
* @x: base number
* @y: power number
*
* Return: -1 if y is less than 0, else it returns the power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
