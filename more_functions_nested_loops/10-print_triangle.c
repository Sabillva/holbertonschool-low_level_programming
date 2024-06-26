#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters.
 * @size: Size of the triangle.
 *
 * Description: If size is 0 or less, prints only a new line.
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

