#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - a function that add a and b
 * @a: first integer
 * @b: second integer
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that calculate a defference of a and b
 * @a: first integer
 * @b: second integer
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function that calculate the prodact of a and b
 * @a: first integer
 * @b: second integer
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function tha divide a by b
 * @a: first integer
 * @b: second integer
 * Return: a / b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - a function that display a remainder of a / b
 * @a: first integer
 * @b: second integer
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
