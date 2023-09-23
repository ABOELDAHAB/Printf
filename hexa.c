#include "main.h"

/**
 * hexa - print int
 * @b: parameter
 * Return: Always 0.
 */
int hexa(long int b)
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
i = 1 + hexa(b / 16);
if ((b % 16) < 10)
pr(((b % 16) + '0'));
else if ((b % 16) == 10)
pr('a');
else if ((b % 16) == 11)
pr('b');
else if ((b % 16) == 12)
pr('c');
else if ((b % 16) == 13)
pr('d');
else if ((b % 16) == 14)
pr('e');
else if ((b % 16) == 15)
pr('f');
return (i);
}
