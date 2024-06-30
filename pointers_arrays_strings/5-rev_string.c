#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string to reverse
 */
void rev_string(char *s)
{
int length = _strlen(s);
int start = 0;
int end = length - 1;
char temp;

while (start < end)
{
/*Swap characters at start and end positions*/
temp = s[start];
s[start] = s[end];
s[end] = temp;

/*Move towards the center*/
start++;
end--;
}
}
