#include "main.h"

/**
 * octi - print int
 * @b: parameter
 * Return: Always 0.
 */
int octi(long int b)
{
int i = 0, ii = 0, iii = 0;
if (b < 0)
{
b = b * -1;
pr('-');
ii++;
}
if ((b / 8) == 0)
{
iii = 1 + pr(b + '0');
return (iii + i - 1);
}
i = 1 + octi(b / 8) + ii;
pr(((b % 8) + '0'));
return (i);
}
