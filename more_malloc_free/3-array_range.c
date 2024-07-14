#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (included) in the array.
 * @max: The maximum value (included) in the array.
 *
 * Return: A pointer to the newly created array, or NULL if min > max
 *         or if malloc fails.
 */
int *array_range(int min, int max)
{

	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
