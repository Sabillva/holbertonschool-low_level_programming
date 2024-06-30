#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @str: The string to calculate the length of
 *
 * Return: The length of the string
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
start = (len + 1) / 2;
}

for (i = start; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

