#include "main.h"

/**
 * main - _isalpha function test
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0');  /* 'H' ucun alfabetik ise '1', degilse '0' yazdırır */

r = _isalpha('o');
_putchar(r + '0');  /* 'o' ucun alfabetik ise '1', dgilse '0' yazdırır */

r = _isalpha('9');
_putchar(r + '0');  /* '9' ucun alfabetik ise '1', degiilse '0' yazdırır */

r = _isalpha('$');
_putchar(r + '0');  /* '$' ucun alfabetik ise '1', degilse '0' yazdırır */

_putchar('\n');     /* Yeni setır yazdırır */

return (0);
}
