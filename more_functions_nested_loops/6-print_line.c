#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times the character '_' should be printed
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n'); /* Print newline if n is 0 or negative */
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_'); /* Print '_' n times */
}
_putchar('\n'); /* End the line with a newline */
}
}

