#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src to the buffer pointed to by dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
/*Append null terminator*/

return (ptr);
}

