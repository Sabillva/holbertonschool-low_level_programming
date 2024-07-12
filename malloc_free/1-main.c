#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

int main(void)
{
	char *s;

	/*Call _strdup to duplicate the string "Duplicated"*/
	s = _strdup("Duplicated");

	/*Check if allocation was successful*/
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	/*Print the duplicated string*/
	printf("%s\n", s);

	/*Free the allocated memory*/
	free(s);

	return (0);
}

