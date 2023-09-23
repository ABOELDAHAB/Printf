#include "main.h"

/**
 * HEXA - print int
 * @b: parameter
 * Return: Always 0.
 */
int HEXA(long int b)
{
int i = 0, ii = 0, iii = 0;
if (b < 0)
{
b = b * -1;
pr('-');
ii++;
}
if ((b / 16) == 0)
{
iii = 1 + pr(b + '0');
return (iii + i - 1);
}
i = 1 + deci(b / 16) + ii;
if (((b % 16) * 16) < 16)
pr(((b % 16) + '0'));
else if (((b % 16) * 16) == 10)
pr('A');
else if (((b % 16) * 16) == 11)
pr('B');
else if (((b % 16) * 16) == 12)
pr('C');
else if (((b % 16) * 16) == 13)
pr('D');
else if (((b % 16) * 16) == 14)
pr('E');
else if (((b % 16) * 16) == 15)
pr('F');
return (i);
}
