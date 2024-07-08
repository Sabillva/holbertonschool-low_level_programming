#include <stdio.h>
#include <stdlib.h> /*For atoi() function*/

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to arguments passed to the program
 *
 * Return: 0 if successful, 1 if there are not exactly two arguments
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

/*Check if the number of arguments is exactly 3 (including program name)*/
if (argc != 3)
{
printf("Error\n");
return (1);
}

/*Convert argv[1] and argv[2] from strings to integers*/
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

/*Calculate the multiplication*/
result = num1 *num2;

/*Print the result*/
printf("%d\n", result);

return (0);
}

