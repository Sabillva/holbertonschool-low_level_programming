#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string (number of characters excluding null byte)
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}

return (len);
}

/**
 * puts_half - Prints the second half of a string
 * @str: The string to process
 */
void puts_half(char *str)
{
int index = 0, len = 0, n;

while (str[index++])
len++;

if ((len % 2) == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}
for (index = n; index < len; index++)
_putchar(str[index]);

_putchar('\n');
}
