#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');  /* Prints '0' or '1' depending on result */
    
r = _islower('o');
_putchar(r + '0');  /* Prints '0' or '1' depending on result */
    
r = _islower(108);  /* ASCII value of 'l' */
_putchar(r + '0');  /* Prints '0' or '1' depending on result */
    
_putchar('\n');  /* Prints newline */

return (0);
}

