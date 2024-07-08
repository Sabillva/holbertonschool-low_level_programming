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
	(void)argc;
/*Print the first argument, which is the program name itself*/
printf("%s\n", argv[0]);

return (0);
}

