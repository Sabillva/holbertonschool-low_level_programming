#include "main.h"

/**
 * factorial - Computes the factorial of a number.
 * @n: The number to compute the factorial of.
 *
 * Return: The factorial of n. If n  0, return -1 to indicate an error.
 */
int factorial(int n)
{
/*Base case: factorial of 0 is 1*/
if (n == 0)
return (1);

/*Error case: factorial is not defined for negative numbers*/
if (n < 0)
return (-1);

/*Recursive case: n * factorial(n-1)*/
return (n * factorial(n - 1));
}

