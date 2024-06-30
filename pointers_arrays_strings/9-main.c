#include "main.h"
#include <stdio.h>

int main(void)
{
char s1[98];
char *ptr;

/*Test case 1: Copy a constant string*/
ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
printf("Copied string 1:\n%s", s1);
printf("Returned pointer 1:\n%s\n\n", ptr);

/*Test case 2: Copy an empty string*/
ptr = _strcpy(s1, "");
printf("Copied string 2:\n%s", s1);
printf("Returned pointer 2:\n%s\n\n", ptr);

/*Test case 3: Copy a string with multiple lines*/
ptr = _strcpy(s1, "This is line 1\nThis is line 2\nThis is line 3\n");
printf("Copied string 3:\n%s", s1);
printf("Returned pointer 3:\n%s\n\n", ptr);

return (0);
}

