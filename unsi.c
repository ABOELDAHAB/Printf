#include "main.h"

/**
 * unsi - print int
 * @b: parameter
 * Return: Always 0.
 */
int unsi(long int b)
{
int i = 0, iii = 0;
if (b < 0)
{
b = 4294967296 + b;
}
if ((b / 10) == 0)
{
iii = 1 + pr(b + '0');
return (iii + i - 1);
}
i = 1 + unsi(b / 10);
pr(((b % 10) + '0'));
return (i);
}
