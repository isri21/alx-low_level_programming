#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Evaluation of the two
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Evaluation of the two
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplys two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Evaluation of the two
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Evaluation of the two
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets the mod of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Evaluation of the two
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
