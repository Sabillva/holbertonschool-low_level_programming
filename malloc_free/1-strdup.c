#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string.
 *         NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len = 0;
	unsigned int i;

	/*If str is NULL, return NULL*/
	if (str == NULL)
		return (NULL);

	/*Calculate the length of str*/
	while (str[len] != '\0')
		len++;

	/*Allocate memory for duplicate string (+1 for null terminator)*/
	duplicate = (char *)malloc((len + 1) * sizeof(char));

	/*If malloc fails, return NULL*/
	if (duplicate == NULL)
		return (NULL);

	/*Copy the contents of str to duplicate*/
	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	/*Null-terminate the duplicate string*/
	duplicate[len] = '\0';

	/*Return a pointer to the duplicated string*/
	return (duplicate);
}

