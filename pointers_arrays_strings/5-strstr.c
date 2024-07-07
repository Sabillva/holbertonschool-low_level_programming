#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string to search within
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack;
	char *current_needle;

	while (*haystack != '\0')
	{

	start_haystack = haystack;
		current_needle = needle;
	while (*current_needle != '\0' && *haystack == *current_needle)
	{
	haystack++;
	current_needle++;
	}

	if (*current_needle == '\0')
		return (start_haystack);

	haystack = start_haystack + 1;
	}

	return (NULL);
}

