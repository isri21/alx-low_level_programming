#include "main.h"

/**
* _abs - Computes the absolute value of an integer.
* @i: Number whose absolute value is to be computed.
*
* Return: Absolute value of the number.
*/
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
