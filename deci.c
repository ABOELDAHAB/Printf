#include "main.h"

/**
 * deci - print int
 * @b: parameter
 * Return: Always 0.
 */
void deci(int b)
{
if (b < 0)
{
b = b * -1;
pr('-');
}
if (b == 0)
return;
deci(b / 10);
pr(((b % 10) + '0'));
}
