#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: Pointer to the string to print
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;  /*Move to every second character*/
}

_putchar('\n');
}
