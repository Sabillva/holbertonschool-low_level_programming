#include "main.h"

/**
 * _pow_recursion - Computes the power of a number.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: x raised to the power of y. If y is lower than 0, return -1.
 */
int _pow_recursion(int x, int y)
{
/*Base case: if y is 0, return 1 (x^0 = 1)*/
if (y == 0)
return (1);

/*Error case: if y is negative, return -1 (undefined)*/
if (y < 0)
return (-1);

/*Recursive case: x * _pow_recursion(x, y-1)*/
return (x * _pow_recursion(x, y - 1));
}

