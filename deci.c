#include "main.h"

/**
 * deci - print int
 * @b: parameter
 * Return: Always 0.
 */
int deci(long int b)
{
int i = 0, ii = 0, iii = 0;
if (b < 0)
{
b = b * -1;
pr('-');
ii++;
}
if ((b / 10) == 0)
{
iii = 1 + pr(b + '0');
return (iii + i - 1);
}
i = 1 + deci(b / 10) + ii;
pr(((b % 10) + '0'));
return (i);
}
