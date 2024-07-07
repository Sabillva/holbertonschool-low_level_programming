#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: pointer to the 2D array (square matrix)
 * @size: size of the matrix (number of rows and columns)
 *
 * Each element of `a` represents an element in the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum_primary = 0;
int sum_secondary = 0;

/*Calculate the sums of the diagonals*/
for (i = 0; i < size; i++)
{
sum_primary += *(a + i * size + i);
/*Primary diagonal elements: a[0][0], a[1][1], a[2][2], ...*/
sum_secondary += *(a + i * size + (size - 1 - i));
/*Secondary diagonal elements: a[0][2], a[1][1], a[2][0], ...*/
}

/*Print the sums*/
printf("%d, %d\n", sum_primary, sum_secondary);
}

