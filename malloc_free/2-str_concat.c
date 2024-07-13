#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory which contains
 *         the contents of s1, followed by the contents of s2.
 *         NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1 = 0, len2 = 0;

	/*Handle NULL inputs by treating them as empty strings*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*Calculate the lengths of the strings*/

	len1 = strlen(s1);
	len2 = strlen(s2);

	/*Allocate memory for the concatenated string (+1 for the null terminator)*/
	result = (char *)malloc(len1 + len2 + 1);

	/*Check if memory allocation was successful*/
	if (result == NULL)
		return (NULL);

	/*Copy the first string into the result*/
	strcpy(result, s1);

	/*Append the second string to the result*/
	strcat(result, s2);

	return (result);
}

