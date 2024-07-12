#include <stdlib.h>

/**
 * create_array - Create array of chars and initializes it with a specific char
 * @size: The size of the array
 * @c: The character to initialize the array with
 *
 * Return: A pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/*Check if size is 0*/
	if (size == 0)
	{
		return (NULL);
	}

	/*Allocate memory for the array*/
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	/*Initialize the array with the specified character*/
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/*Return the pointer to the array*/
	return (array);
}
