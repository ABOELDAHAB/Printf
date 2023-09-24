#include "main.h"

/**
 * STR - Entry point
 * @s: parameter
 * Return: Always 0.
 */
int STR(char *s)
{
int i = 0;

if (!*s)
{
return (0);
}
if (((char)(0) <= s[i]) && (s[i] < (char)(32)))
{
pr('\\');
pr('x');
if (((char)(9) < s[i]) && (s[i] < (char)(15)))
pr('0');
HEXA((int)(s[i]));
s++;
}

pr(*s);
i = 1 + STR(s + 1);
return (i);
}
