#include "main.h"
#include <stdio.h>

/*
 * jack_bauer - print hours and minutes
 *
 * Description: every minutes of a day
 *
 * Return: 0 if success
 */

void jack_bauer(void)
{
int minutes, hours;

for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
/*obtenir le chiffre des dizaines uniquement*/
_putchar('0' + (hours / 10));
/*obtenir le chiffre des unités uniquement*/
_putchar('0' + (hours % 10));
_putchar(':');
_putchar('0' + (minutes / 10));
_putchar('0' + (minutes % 10));
_putchar('\n');
}
}
}
