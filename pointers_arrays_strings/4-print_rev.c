#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to print
 */
void print_rev(char *s)
{
int length = 0;
int i;
/*Calculate the length of the string*/
while (*s != '\0')
{
length++;
s++;
}
/*Move s back to the start of the string*/
s--;

/*Print characters in reverse order*/
for (i = length - 1; i >= 0; i--)
{
_putchar(*(s - i));
}
_putchar('\n');
}

