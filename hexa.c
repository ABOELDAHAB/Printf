#include "main.h"

/**
 * hexa - print int
 * @b: parameter
 * Return: Always 0.
 */
int hexa(long int b)
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
pr('a');
else if (((b % 16) * 16) == 11)
pr('b');
else if (((b % 16) * 16) == 12)
pr('c');
else if (((b % 16) * 16) == 13)
pr('d');
else if (((b % 16) * 16) == 14)
pr('e');
else if (((b % 16) * 16) == 15)
pr('f');
return (i);
}
