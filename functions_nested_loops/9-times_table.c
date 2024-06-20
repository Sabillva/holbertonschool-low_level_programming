#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;
/* Print product with proper formatting */
if (column == 0)
_putchar('0');
else
{
_putchar(',');
_putchar(' ');
if (product < 10)
_putchar(' '); /* Extra space for single digit */
}

if (product >= 10)
{
_putchar('0' + (product / 10)); /* Tens digit */
_putchar('0' + (product % 10)); /* Ones digit */
}
else
_putchar('0' + product); /* Single digit */

if (column == 9)
_putchar('\n');
}
}
}

