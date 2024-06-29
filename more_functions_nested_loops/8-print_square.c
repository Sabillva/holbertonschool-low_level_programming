#include "main.h"

/**
 * print_square - prints a square of '#' characters followed by a new line
 * @size: size of the square
 */
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n'); /* Print newline if size is 0 or negative */
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#'); /* Print '#' for each column */
}
_putchar('\n'); /* New line after each row */
}
}
}

