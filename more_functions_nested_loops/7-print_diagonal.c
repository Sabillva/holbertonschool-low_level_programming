#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
int i, spaces;

if (n <= 0)
{
_putchar('\n'); /* Print newline if n is 0 or negative */
}
else
{
for (i = 0; i < n; i++)
{
for (spaces = 0; spaces < i; spaces++)
{
_putchar(' '); /* Print spaces before '\' */
}
_putchar('\\'); /* Print '\' */
_putchar('\n'); /* New line after each '\' */
}
}
}

