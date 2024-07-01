#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched
 * @accept: The characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0, match = 0, a;
while (accept[count])
{
	a = 0;

		while (s[a] != 32)
		{
			if (accept[count] == s[a])
			{
				match++;
			}

			a++;
		}

		count++;
}
return (match);
}
