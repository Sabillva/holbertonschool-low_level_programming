#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
/*Print the number of arguments (excluding the program name)*/
printf("%d\n", argc - 1);

return (0);
}

