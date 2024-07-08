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
int i;

/*Iterate through each argument in argv*/
for (i = 0; i < argc; i++)
{
/*Print each argument followed by a newline*/
printf("%s\n", argv[i]);
}

return (0);
}

