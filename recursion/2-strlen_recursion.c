#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string to find the length of.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
/*Base case: If the current character is '\0', return 0*/
if (*s == '\0')
return (0);
/*Recursive: return 1 (for current character) + length of rest of the string*/
return (1 + _strlen_recursion(s + 1));
}

