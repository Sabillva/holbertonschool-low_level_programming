#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line, using recursion
 * @s: Pointer to the string to be printed
 */
void _puts_recursion(char *s);
/**
 * main - Test function for _puts_recursion
 *
 * Return: Always 0
 */
int main(void)
{
char *str1 = "Hello, world!";
char *str2 = "Puts with recursion";
char *str3 = "";

_puts_recursion(str1);
_puts_recursion(str2);
_puts_recursion(str3);

return (0);
}

