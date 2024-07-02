#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the characters to match
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != 0)
	{
	for (a = 0; accept[a] != 0; a++)
	{

	if (*s == accept[a])

	return (s);
	}
	s++;
}
return (0);
}
