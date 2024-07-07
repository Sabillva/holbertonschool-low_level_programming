#include "main.h"
#include <stdio.h>

int main(void)
{
char *haystack = "Hello, world! This is a test.";
char *needle = "world";
char *result;

result = _strstr(haystack, needle);

if (result == NULL)
{
printf("'%s' not found in '%s'\n", needle, haystack);
}
else
{
printf("'%s' at position %ld in '%s'\n", needle, result - haystack, haystack);
}
return (0);
}

