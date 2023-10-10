#include "main.h"
/**
* print_last_digit - Prints the last digit of a number.
* @i: number whose last digit is to be printed
*
* Return: Last digit of number
*/
int print_last_digit(int i)
{
	int h = i % 10;

	if (h < 0)
	{
		_putchar('0' + -h);
		return (-h);
	}
	else
	{
		_putchar('0' + h);
		return (h);
	}
}
