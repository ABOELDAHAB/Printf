#include "main.h"

/**
 * HEXA - print int
 * @b: parameter
 * Return: Always 0.
 */
int HEXA(long int b)
{
int i = 0;
if (b < 0)
{
b = 4294967296 + b;
}
if (((b / 16) == 0) && ((b % 16) == 0))
{
return (0);
}
i = 1 + HEXA(b / 16);
if ((b % 16) < 10)
pr(((b % 16) + '0'));
else if ((b % 16) == 10)
pr('A');
else if ((b % 16) == 11)
pr('B');
else if ((b % 16) == 12)
pr('C');
else if ((b % 16) == 13)
pr('D');
else if ((b % 16) == 14)
pr('E');
else if ((b % 16) == 15)
pr('F');
return (i);
}
