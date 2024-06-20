#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
/* Print hour tens and ones place */
_putchar('0' + (hour / 10));
_putchar('0' + (hour % 10));
_putchar(':');
/* Print minute tens and ones place */
_putchar('0' + (minute / 10));
_putchar('0' + (minute % 10));
_putchar('\n');
}
}
}

