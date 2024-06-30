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
int len = _strlen(str);
int i, start;

if (len % 2 == 0)
{
start = len / 2;
}
else
{
start = (len - 1) / 2;
}

for (i = start; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

