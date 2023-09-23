#include "main.h"

/**
 * deci - print int
 * @b: parameter
 * Return: Always 0.
 */
int deci(int b)
{
int i = 0;
if (b < 0)
{
b = b * -1;
pr('-');
}
if (b == 0)
return;
i = 1 + deci(b / 10);
pr(((b % 10) + '0'));
return (i);
}
