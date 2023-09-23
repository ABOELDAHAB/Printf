#include "main.h"

/**
 * beni - print int
 * @b: parameter
 * Return: Always 0.
 */
int beni(unsigned int b)
{
int i = 0, iii = 0;
if ((b / 2) == 0)
{
iii = 1 + pr(b + '0');
return (iii + i - 1);
}
i = 1 + beni(b / 2);
pr(((b % 2) + '0'));
return (i);
}
